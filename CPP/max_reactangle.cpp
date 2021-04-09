// https://practice.geeksforgeeks.org/problems/max-rectangle/1
#include <bits/stdc++.h>
using namespace std;

int getMin(int his[], int size, bool LOR, int index) {
    int i = index;
    while (((LOR && i>=0) || (!LOR && i<size)) && his[i]>=his[index])
        i = LOR ? i-1 : i+1;
    return i;
}

int main() {
    // DATA
    int n = 4, m = 4;
    int arr[4][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}, {1, 1, 1, 0}};

    // Create a histogram array
    int histogram[m];
    for(int i=0; i<m; i++)
        histogram[i] = 0;

    int maxArea = 0;    // Max Area 

    for(int i=0; i<n; i++) {
        // Update histogram
        for(int j=0; j<m; j++)
            histogram[j] = arr[i][j]==0 ? 0 : histogram[j]+1;
    
        // Check for max area value
        for(int j=0; j<m; j++)
            maxArea = max(maxArea, histogram[j]*(getMin(histogram, m, false, j)-getMin(histogram, m, true, j)-1));
    }

    // OUTPUT
    cout << maxArea << endl;

    return 0;
}