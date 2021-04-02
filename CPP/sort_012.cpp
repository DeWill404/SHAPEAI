// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {0,2,1,0,1,2,0,1,0,2};

    // 0, 1, 2's pointer
    int low = 0;
    int mid = 0;
    int high = n-1;

    // Sort number
    while (mid <= high) {
        switch (arr[mid])
        {
            // Swap low & mid
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            
            // Do not swap
            case 1:
                mid++;
                break;
            
            // Swap mid & high
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
    
    // OUTPUT
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}