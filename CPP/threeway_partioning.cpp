// https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int arr[] = {1, 2, 3, 3, 4, 5, 10, 3, 5, 3};
    int n = 10;
    int a = 3, b = 5;

    // Do partitioning at A
    int low = 0;
    int high = n-1;
    while(low < high) {
        while(arr[low] <= a && low < high)
            low++;
        while(arr[high] > a)
            high--;
        if (low < high)
            swap(arr[low], arr[high]);
    }

    // Do partitioning at B
    low = 0;
    high = n-1;
    while(low < high) {
        while(arr[low] <= b && low < high)
            low++;
        while(arr[high] > b)
            high--;
        if (low < high)
            swap(arr[low], arr[high]);
    }

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}