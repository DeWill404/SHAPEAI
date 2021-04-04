// https://leetcode.com/problems/next-permutation/description/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 9;
    int arr[] = {1, 5, 8, 4, 7, 6, 5 ,3, 1};

    // Low & Hight ptr to reverse
    int low = 0;
    int high = n-1;

    // Find index for 1st decreasing value from right
    int decre_index = n-1;
    while(decre_index>0 && arr[decre_index]-arr[decre_index-1]<=0)
        decre_index--;

    // Check it index is out of bond
    if (decre_index != 0) {
        // Get minimum difference index
        int diff_index = decre_index;
        int minDiff = arr[diff_index] - arr[decre_index-1];
        for(int i=diff_index+1; i<n; i++)
            if (arr[i]-arr[decre_index-1]>0 && arr[i]-arr[decre_index-1]<=minDiff) {
                diff_index = i;
                minDiff = arr[i] - arr[decre_index-1];
            }

        // Swap value
        swap(arr[decre_index-1], arr[diff_index]);

        low = decre_index;
    }

    // Reverse array
    while(low < high)
        swap(arr[low++], arr[high--]);

    // OUTPUT
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}