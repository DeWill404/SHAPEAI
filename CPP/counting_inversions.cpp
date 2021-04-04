// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#
#include <bits/stdc++.h>
using namespace std;

/* COMBINE the divided array */
int combine(int arr[], int start, int mid, int end) {
    int cnt = 0;
    int i = start, j = mid+1, k = 0;
    int temp[end-start];

    while(i<=mid && j<=end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            // Icrease cnt, when inversion found
            cnt += mid-i+1;
        }
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= end)
        temp[k++] = arr[j++];

    for(int i=start; i<=end; i++)
        arr[i] = temp[i-start];

    return cnt;
}


/* Function to implement MERGE SORT */
int mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end)/2;
        return mergeSort(arr, start, mid) + mergeSort(arr, mid+1, end) + combine(arr, start, mid, end);
    }
    return 0;
}


int main() {
    // DATA
    int n = 9;
    int arr[] = {1, 5, 8, 4, 7, 6, 5 ,3, 1};

    // Get cout of inversion using MergeSort
    cout << mergeSort(arr, 0, n-1) << endl;
}