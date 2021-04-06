// https://leetcode.com/problems/search-a-2d-matrix/
#include <bits/stdc++.h>
using namespace std;

// Do binary search on 2d array
bool binarySearch(int arr[4][4], int c, int s, int l, int h) {
    if (l < h) {
        // Get Mid element
        int mid = (l + h)/2;
        int R = mid/c;
        int C = mid%c;

        // Search for element
        if (arr[R][C] == s)
            return true;
        else if (arr[R][C] > s)
            return binarySearch(arr, c, s, l, mid);
        else
            return binarySearch(arr, c, s, mid+1, h);
    }
    return false;
}


int main() {
    // DATA
    int r = 3;
    int c = 4;
    int arr[4][4] = {{1,3,5,7}, {10,11,16,20},{23,30,34,60}};
    int s = 8;

    // Search for element
    cout << binarySearch(arr, c, s, 0, r*c-1) << endl;
    return 0;
}