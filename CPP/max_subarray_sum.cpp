// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {-1,4,-2,3,-3,3,-4,0,0,100};

    int SUM = arr[0];       // Temporary SUM
    int maxSum = arr[0];    // Total max SUM
    // Get max sum of subarray
    for (int i=1; i<n; i++) {
        SUM = max(arr[i], SUM+arr[i]);
        maxSum = max(maxSum, SUM);
    }

    // Print out sum
    cout << maxSum << endl;

    return 0;
}