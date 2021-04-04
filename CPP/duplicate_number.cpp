// https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 5;
    int arr[] = {1,2,5,2,2};

    // Sort Array
    sort(arr, arr+n);

    // Find Repetation
    for (int i=0; i<n; i++)
        if (i+1 != arr[i]) {
            cout << arr[i] << endl;
            break;
        }

    return 0;
}