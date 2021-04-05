// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
#include <bits/stdc++.h>
using namespace std;

int main () {
    // DATA
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = 6;
    int sum = 13;

    // Sort Array
    sort(arr, arr+n);

    // Search for number
    for(int i=0; i<n-2; i++) {
        int j = i+1;
        int k = n-1;
        while(j < k) {
            if (arr[i]+arr[j]+arr[k] > sum)
                k--;
            else if (arr[i]+arr[j]+arr[k] < sum)
                j++;
            else {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                return 0;
            }
        }
    }

    cout << "Not found" << endl;
    return 0;
}