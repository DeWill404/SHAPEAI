// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9, 0};

    // PTR varaibles
    int left = 0;
    int right = n-1;

    // SORT values
    while (left < right) {
        // Find +ve in left end
        while (arr[left] < 0 && left < right)
            left++;
        // Find -ve on right end
        while (arr[right] >= 0 && left < right)
            right--;
        // Swap left & right
        if (left < right)
            swap(arr[left], arr[right]);
    }

    // Output
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}