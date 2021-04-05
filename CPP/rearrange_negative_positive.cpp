// https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {-1, -1, -1, -1, -1, -1, -3, -4, -3, -2};

    // Low ptr to store last index for rearranged elements
    int low = 0;

    // Reaarange List
    for(int i=0; i<n; i++) {
        // Check if list is arranged properly
        if ((low%2==0 && arr[low]<0) || (low%2==1 && arr[low]>=0)) {
            low++;
        }
        // Check if element at ith position is to be placed at lowth position
        else if ((low%2==0 && arr[i]<0) || (low%2==1 && arr[i]>=0)) {
            swap(arr[low++], arr[i]);
            i--;
        }
    }

    // OUTPUT
    for(int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}