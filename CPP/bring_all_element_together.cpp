// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int arr[] = {4, 11, 6, 5, 11, 20, 19, 14, 14, 2, 9, 20, 11, 11, 15, 1, 7, 12, 19, 9};
    int n = 20;
    int k = 14;

    // Calculate no. of valid elements
    int validCnt = 0;
    for(auto num : arr)
        if (num <= k)
            validCnt++;

    // Create a window with count of total invalid values
    int swapCnt = 0;
    for(int i=0; i<validCnt; i++)
        if (arr[i] > k)
            swapCnt++;

    // Slide window & update cnt & get minimum invalid values
    int minSwap = swapCnt;
    for(int i=validCnt; i<n; i++) {
        if (arr[i-validCnt] > k)
            swapCnt--;
        if (arr[i] > k)
            swapCnt++;
        minSwap = min(minSwap, swapCnt);
    }

    // OUTPUT
    cout << minSwap << endl;

    return 0;
}