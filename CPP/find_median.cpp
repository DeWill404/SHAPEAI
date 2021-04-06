// https://practice.geeksforgeeks.org/problems/find-the-median0527/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20};

    // Sort Data
    sort(arr, arr+n);

    // Get median
    cout << (n%2 ? arr[n/2] : (arr[n/2-1]+arr[n/2])/2) << endl;
    return 0;
}