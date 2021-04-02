// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 10;
    int arr[] = {54, 46, 64, 56, 6, 46, 46, 2, 34, 45};

    // Set INITIAL value of min & max
    int min = arr[0];
    int max = arr[0];

    // find min max in array
    for (int i = 1; i < n; i++)
    {
        // SEARCH for min
        if (min > arr[i])
            min = arr[i];
            
        // SEARCH for max
        if (max < arr[i])
            max = arr[i];
    }
    
    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;

    return 0;
}