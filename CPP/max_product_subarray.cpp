// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 6;
    int arr[] = {2, 3, 4, 5, -1, 0};

    int prod = arr[0];  // Final Product
    int maxProd = arr[0];   // Max Product
    int minProd = arr[0];   // Min Product

    // Check for PRODUCT
    for(int i=1; i<n; i++) {
        if (arr[i] < 0)
            swap(minProd, maxProd);

        minProd = min(arr[i], arr[i]*minProd);
        maxProd = max(arr[i], arr[i]*maxProd);

        prod = max(prod, maxProd);
    }

    cout << prod << endl;

    return 0;
}