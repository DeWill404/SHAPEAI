// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 8;
    int s = 5;
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};

    // Sort array
    sort(arr, arr+n);

    // Get minimum difference
    int minDiff = arr[s-1] - arr[0];
    for(int i=s; i<n; i++)
        minDiff = min(minDiff, arr[i]-arr[i-s+1]);

    cout << minDiff << endl;

    return 0;
}