// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    vector<char>key{ 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    vector<int>value{ 1, 5, 10, 50, 100, 500, 1000 };
    string s = "CM";

    // Convet Roman to integer
    int val = 0;
    for(int i=0; i<s.length()-1; i++) {
        int index = find(key.begin(), key.end(), s[i]) - key.begin();
        int temp = value[index];

        if (index < find(key.begin(), key.end(), s[i+1]) - key.begin())
            val -= value[index];
        else
            val += value[index];

    }
    int index = find(key.begin(), key.end(), s[s.length()-1]) - key.begin();
    int temp = value[index];
    val += temp;

    cout << val << endl;

    return 0;
}