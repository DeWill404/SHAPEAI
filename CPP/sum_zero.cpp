// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 5;
    int arr[] = {4, 2, -3, 1, 6};

    int SUM = 0;    // SUM varaible
    unordered_set<int> set; // Set to store sums

    // Check if any sum is repeated
    for(int num : arr) {
        SUM += num;
        // If number is 0
        // If SUM is 0
        // If sum is repeated
        if (num==0 || SUM==0 || set.find(SUM)!=set.end()) {
            cout << "YES" << endl;
            return 0;
        }

        set.insert(SUM);
    }

    cout << "NO" << endl;
    return 0;
}