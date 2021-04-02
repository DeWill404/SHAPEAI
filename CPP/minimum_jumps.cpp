// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 11;
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};

    int jumps = 0;
    int curMax = 0;
    int curJump = 0;
    for(int i=0; i<n-1; i++) {
        curJump = max(curJump, i+arr[i]);
        if (i == curMax) {
            jumps++;
            curMax = curJump;
        }
        if (curMax >= n-1) {
            break;
        }
    }
    
    cout << jumps << endl;

    return 0;
}