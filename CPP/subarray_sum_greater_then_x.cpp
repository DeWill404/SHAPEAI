// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // int arr[] = {234, 67, 234, 97, 34, 7, 387, 23, 68, 23};
    // int n = 10;
    // int X = 402;
    int arr[] = {6, 3, 4, 5, 4, 3, 7, 9};
    int n = 8;
    int X = 16;

    int len = n;    // Len of required sum
    int sum = 0;    // Sum at instance

    // ptr to move window
    int s = 0, e = 0;
    while (e < n) {
        // Check if any element is greater then X
        if (arr[e] > X) {
            cout << 1 << endl;
            return 0;
        }

        // Update len value
        if (sum <= X)
            sum += arr[e++];
        if (sum > X) {
            len = min(len, e-s);
            sum -= arr[s++];
        }
    }

    // Remove extra values
    while (sum > X) {
        len = min(len, e-s);
        sum -= arr[s++];
    }

    cout << len << endl;

    return 0;
}