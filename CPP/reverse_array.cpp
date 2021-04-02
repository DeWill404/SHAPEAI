// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {54, 46, 64, 56, 6, 46, 46, 2, 34, 45};

    // LOW & HIGH pointer
    int low = 0;
    int high = n-1;

    // REVERSE the array
    while (low < high)
        swap(arr[low++], arr[high--]);
    

    // PRINT reversed DATA
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}