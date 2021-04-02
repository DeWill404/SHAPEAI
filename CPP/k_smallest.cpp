// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
#include <bits/stdc++.h>
using namespace std;

/* Function to randomly select pivot & returns its index */
int partition(int arr[], int start, int end) {
    // Select pivot
    int index = end;
    int pivot = arr[index];

    // move small to left & large to right
    while (start < end)
    {
        while (arr[start] <= pivot && start < end)
            start++;
        
        while (arr[end] >= pivot && start < end)
            end--;
        
        if (start < end)
            swap(arr[start], arr[end]);
    }

    // Move pivot to its position "end"
    arr[index] = arr[end];
    arr[end] = pivot;
    
    // Return index
    return end;
}


/* Function to create partition to search kth element within */
int quickSelect(int arr[], int start, int end, int k) {
    // Get index of random element
    int index = partition(arr, start, end);

    // IF kth element is on left side
    if (index > k)
        return quickSelect(arr, start, index-1, k);
    // IF kth element is on right side
    else if (index < k)
        return quickSelect(arr, index+1, end, k);

    // Return kth element
    return arr[k];
}


int main() {
    // DATA
    int n = 10;
    int arr[] = {54, 46, 64, 56, 6, 46, 46, 2, 34, 45};
    int k = 1;

    // Search for kth smallest element
    cout << quickSelect(arr, 0, n-1, k-1) << endl;

    return 0;
}