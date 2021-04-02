// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int k = 5;

    // SORT array
    sort(arr, arr+n);

    // Get difference in height
    int diff = arr[n-1] - arr[0];
    for (int i = 1; i <= n-1; i++) {
        if (arr[i] >= k) {
            int MAX = max(arr[i-1]+k, arr[n-1]-k);
            int MIN = min(arr[0]+k, arr[i]-k);

            diff = min(diff, MAX-MIN);
        }
    }

    // return Difference
    cout << diff << endl;

    return 0;
}