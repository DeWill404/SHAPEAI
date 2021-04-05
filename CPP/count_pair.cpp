// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int n = 4;
    int arr[] = {1, 5, 7, 1};
    int k = 6;

    unordered_map<int, int> MAP;    // MAP for finding PAIR
    int cnt = 0;    // COUNT OF PAIR

    // FIND PAIR
    for(int i=0; i<n; i++) {
        if (MAP.find(k-arr[i]) != MAP.end()) {
            cnt += MAP[k-arr[i]];
        }
        MAP[arr[i]]++;
    }

    // OUTPUT
    cout << cnt << endl;

    return 0;
}