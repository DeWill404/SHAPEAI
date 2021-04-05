// https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 8;
    int k = 4;
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};

    // Map to store count of each number
    unordered_map<int, int> count_map;
    for(int num : arr)
        count_map[num]++;

    // List of satisfied number
    vector<int> lst;
    for(auto value : count_map)
        if (value.second > n/k)
            lst.push_back(value.first);

    // OUTPUT
    for(int num : lst)
        cout << num << " ";
    cout << endl;

    return 0;
}