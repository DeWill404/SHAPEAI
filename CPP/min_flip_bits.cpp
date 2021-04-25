// https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string s = "0001010111";

    // Flip the bits
    int flip_cnt = 0;
    for(int i=1; i<s.length(); i++)
        if (s[i] == s[i-1]) {
            flip_cnt++;
            s.replace(i, 1, s[i]=='0' ? "1" : "0");
        }

    // cnt
    cout << flip_cnt << endl;

    return 0;
}