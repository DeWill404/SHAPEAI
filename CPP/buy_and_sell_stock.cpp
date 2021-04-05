// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 5;
    int arr[] = {7,6,4,3,1};

    // Set INITIAL valuse
    int profit = 0;
    int MIN = arr[0];
    int MAX = arr[0];

    // Check for MAX PROFIT
    for (int i = 1; i < n; i++) {
        // New lowest price found, reset min-max
        if (arr[i] < MIN) {
            profit = max(profit, MAX-MIN);
            MAX = MIN = arr[i];
        }
        // New highest price found, update max
        if (arr[i] > MAX) {
            MAX = arr[i];
        }
    }
    // Update profit
    profit = max(profit, MAX-MIN);

    cout << profit << endl;

    return 0;
}