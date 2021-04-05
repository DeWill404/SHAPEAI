// https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 30, 15, 10, 8, 25, 80};
    int n = 7;

    // Set profit Array
    int profit[n];
    for (int i=0; i<n; i++)
        profit[i] = 0;
    
    // Search for maximum profit can be made at ith position
    int MAX = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        MAX = max(MAX, arr[i]);
        profit[i] = max(profit[i+1], MAX-arr[i]);
    }

    // Get max profit, when stock is divided at ith position
    int MIN = arr[0];
    for(int i=1; i<n; i++) {
        MIN = min(MIN, arr[i]);
        profit[i] = max(profit[i-1], profit[i]+arr[i]-MIN);
    }

    cout << profit[n-1] << endl;

    return 0;
}