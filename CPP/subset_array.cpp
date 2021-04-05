// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int n1 = 6;
    int arr2[] = {11, 3, 7, 1};
    int n2 = 4;

    // Create set from arr1
    unordered_set<int> set;
    for(int num : arr1)
        set.insert(num);

    // Check if all element from arr2 is present in arr1
    int i;
    for(i=0; i<n2; i++)
        if (set.find(arr2[i]) == set.end())
            break;

    cout << (i==n2 ? "YES" : "NO") << endl;

    return 0;
}