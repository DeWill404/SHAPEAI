// https://www.geeksforgeeks.org/find-a-specific-pair-in-matrix/
#include <bits/stdc++.h>
using namespace std;

int main () {
    // DATA
    int n = 5;
    int arr[5][5] = {{ 1, 2, -1, -4, -20 },
                     { -8, -3, 4, 2, 1 },
                     { 3, 8, 0, 1, 3 },
                     { 4, -1, 1, 7, -6 },
                     { 0, -4, 10, -5, 1 }};

    // Set initial value of min array
    int minArr[5][5];
    for(int i=0; i<n; i++) {
        if (i == 0)
            minArr[0][i] = arr[0][i];
        else {
            minArr[0][i] = min(minArr[0][i-1], arr[0][i]);
            minArr[i][0] = min(minArr[i-1][0], arr[i][0]);
        }
    }

    // Search min value at i,j on array from 0,0 to i-1,j-1
    for(int i=1; i<n; i++)
        for(int j=1; j<n; j++)
            minArr[i][j] = min(arr[i][j], min(minArr[i][j-1], min(minArr[i-1][j], minArr[i-1][j-1])));

    // Search for max difference
    int maxDiff = 0;
    for(int i=1; i<n; i++)
        for(int j=1; j<n; j++)
            maxDiff = max(maxDiff, arr[i][j]-minArr[i-1][j-1]);

    // OUTPUT
    cout << maxDiff << endl;

    return 0;
}