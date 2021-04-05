// https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
#include <bits/stdc++.h>
using namespace std;

/* Function to multiply b with list of digits a */
vector<int> multiply(vector<int> a, int b) {
    // New list of digits
    vector<int> result;
    int carry = 0;
    for(int digit : a) {
        int val = digit * b + carry;
        result.push_back(val%10);
        carry = val/10;
    }
    while(carry != 0) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}


int main() {
    // DATA
    int n = 5;
    vector<int> result{1};

    // Multiply each number
    for(int i=2; i<=n; i++)
        result = multiply(result, i);

    // Reverse List
    reverse(result.begin(), result.end());

    // OUTPUT
    for(int a : result)
        cout << a;
    cout << endl;

    return 0;
}