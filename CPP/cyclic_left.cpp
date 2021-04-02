// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 6;
    int arr[] = {5,1,0,8,9,6};

    // Rotate Array
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--)
        arr[i] = arr[i-1];
    arr[0] = temp;

    // OUTPUT
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}