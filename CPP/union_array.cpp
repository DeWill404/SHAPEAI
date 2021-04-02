// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int nA = 5;
    int arrA[] = {3,2,1,4,5};
    int nB = 6;
    int arrB[] = {5,1,0,8,9,6};

    // SET to combine array
    set<int> SET;
    for (int i = 0; i < nA; i++)
        SET.insert(arrA[i]);
    for (int i = 0; i < nB; i++)
        SET.insert(arrB[i]);

    // Return size of SET
    cout <<  SET.size() << endl;

    return 0;
}