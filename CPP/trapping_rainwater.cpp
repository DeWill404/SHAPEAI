// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
#include <bits/stdc++.h>
using namespace std;

int main () {
    // DATA
    int arr[] = {1, 6, 3, 2, 8, 3, 6, 2, 5, 2};
    int n = 10;

    int water = 0;  // Total water trapped

    // Left & Right ptr
    int left = 0;
    int right = n-1;

    // Max height at left-end & right-end
    int leftMax = arr[0];
    int rightMax = arr[n-1];

    // Calculate water
    while (left < right)
    {
        // Update left & right height
        leftMax = max(leftMax, arr[left]);
        rightMax = max(rightMax, arr[right]);
        // update water
        water += leftMax<rightMax ? leftMax-arr[left++] : rightMax-arr[right--];
    }

    cout << water << endl;
}