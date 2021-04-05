// https://practice.geeksforgeeks.org/problems/common-elements1132/1#
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int nA = 6;
    int arrA[] = {1, 5, 10, 20, 40, 80};
    int nB = 5;
    int arrB[] = {6, 7, 20, 80, 100};
    int nC = 8;
    int arrC[] = {3, 4, 15, 20, 30, 70, 80, 120};

    // List to store common elements
    vector<int> lst;
    int i=0, j=0, k=0;
    // Find common
    while(i<nA && j<nB && k<nC) {
        // Bring all list to same value
        if (arrA[i]<arrB[j] || arrA[i]<arrC[k])
            i++;
        else if (arrB[j]<arrA[i] || arrB[j]<arrC[k])
            j++;
        else if (arrC[k]<arrA[i] || arrC[k]<arrB[j])
            k++;

        // Check if same value is already in list or not
        if (arrA[i]==arrB[j] && arrA[i]==arrC[k]) {
            bool found = false;
            for(auto ele : lst) {
                if (ele == arrA[i]) {
                    found = true;
                    break;
                }
            }
            // Append if not in list
            if (!found)
                lst.push_back(arrA[i]);

            // Increament ptr of all list
            i++; j++; k++;
        }
    }

    // Print common elements
    for(auto ele : lst)
        cout << ele << " ";
    cout << endl;

    return 0;
}