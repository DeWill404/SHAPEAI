// https://practice.geeksforgeeks.org/problems/word-wrap1646/1
#include<bits/stdc++.h>
using namespace std;

int main () {
    // DATA
    int n = 3;
    int arr[] = {3, 2, 2};
    int k = 4;

    // OPT list
    vector<vector<int>> list;

    int i=0;
    while (i < n) {
        int len = k;
        int j = i;
        while (j < n ) {
            // Check if word is addable
            if (len >= arr[j] + (j==n-1 ? 0 : 1))
                len -= arr[j] + (j==n-1 ? 0 : 1);
            else
                break;
            j++;
        }
        list.push_back( vector<int>{i+1, j} );
        i = j;
    }
    
    // OPT
    for(auto l : list)
        cout << l[0] << " " << l[1] << endl;

    return 0;
}