// https://practice.geeksforgeeks.org/problems/word-break1352/1
#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B) {
    if (find(B.begin(), B.end(), A) != B.end()) {
        return 1;
    }
    for(int i=1; i<A.length(); i++) {
        if ( find(B.begin(), B.end(), A.substr(0,i)) != B.end() ) {
            if ( find(B.begin(), B.end(), A.substr(i, A.length())) != B.end() ) {
                return 1;
            } else {
                return wordBreak(A.substr(i, A.length()), B);
            }
        }
    }
    return 0;
}

int main() {
    int n = 7;
    string s = "abcd";
    vector<string> v{"a", "b", "c", "e", "d", "f"};

    cout << wordBreak(s, v) << endl;

    return 0;
}