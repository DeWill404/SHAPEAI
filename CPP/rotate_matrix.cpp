// https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 4;
    int arr[4][4] = {{13, 9, 5, 1}, {14, 10, 6, 2}, {15, 11, 7, 3}, {16, 12, 8, 4}};

    // Rotate clockwiase
    for(int j=0; j<n; j++) {
        for(int i=n-1; i>=0; i--)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}