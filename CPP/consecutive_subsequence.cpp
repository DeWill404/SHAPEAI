// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 7;
    int arr[] = {10, 11, 12, 13, 14, 15, 6}; 

    // Set to hash data, first all data
    unordered_set<int> set;
    for (int num : arr)
        set.insert(num);

    // Set max length to 1
    int maxLength = 1;
    for(int i=0; i<n; i++) {
        // Check if all no. are in series
        if (set.empty())
            break;

        // Set temp length
        int len = 1;
        // Search for consecative on higher end & remove it if found
        int val = arr[i];
        while(set.find(val-1) != set.end()) {
            set.erase(--val); len++;
        }
        // Search for consecative on lower end & remove it if found
        val = arr[i];
        while(set.find(val+1) != set.end()) {
            set.erase(++val); len++;
        }
        // Update MAX value
        maxLength = max(len, maxLength);
    }

    // OUTPUT
    cout << maxLength << endl;

    return 0;
}