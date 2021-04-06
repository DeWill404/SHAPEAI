// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int R = 4;
    int C = 3;
    int matrix[4][3] = {{1, 3, 4}, {5, 6, 7}, {9, 11, 12}, {14, 15,16}};

    // Spiral List
    vector<int> arr;

    // X, Y pointer
    int X = 0;
    int Y = -1;

    // Traverse Spirally
    while (R>0) {
        // Move right
        for(int i=C; i>0 && R>0; i--)
            arr.push_back(matrix[X][++Y]);
        R--;
        // Move down
        for(int i=R; i>0 && C>0; i--)
            arr.push_back(matrix[++X][Y]);
        C--;
        // Move left
        for(int i=C; i>0 && R>0; i--)
            arr.push_back(matrix[X][--Y]);
        R--;
        // Move up
        for(int i=R; i>0 && C>0; i--)
            arr.push_back(matrix[--X][Y]);
        C--;
    }

    // OUTPUT
    for(auto num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}