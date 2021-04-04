// https://leetcode.com/problems/merge-intervals/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int arr[4][2] = {{2,3},{1,6},{8,10},{15,18}};
    int n = 4;

    // OUTPUT VARAIBLE
    int opt[10][2];
    int ptr = 1;

    // Add starting interval
    opt[0][0] = arr[0][0];
    opt[0][1] = arr[0][1];


    for (int i = 1; i < n; i++) {
        // Check for OVERLAPPING interval
        int p;
        for(p = 0; p < ptr; p++) {
            // If new interval comes inside old interval
            if (arr[i][0] >= opt[p][0] && arr[i][0] <= opt[p][1]) {
                if (arr[i][1] > opt[p][1])
                    opt[p][1] = arr[i][1];
                break;
            }

            // For interval A-B & C-D
            // Check for A-C-D-B & A-C-B-D
            if (arr[i][0] <= opt[p][0] && arr[i][1] >= opt[p][0]) {
                opt[p][0] = arr[i][0];
                if (arr[i][1] > opt[p][1])
                    opt[p][1] = arr[i][1];
                break;
            }
        }

        // If not OVERLAP then append to end
        if (p == ptr) {
            opt[ptr][0] = arr[i][0];
            opt[ptr++][1] = arr[i][1];
        }
    }
    
    // OUTPUT
    for (int i = 0; i < ptr; i++)
        cout << opt[i][0] << " " << opt[i][1] << endl;
    

    return 0;
}