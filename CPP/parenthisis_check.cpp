// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Data
    string s = "{([{{[(({}))]}}])}";

    string stack = "";
    int TOP = -1;
    for(int i=0; i< s.length(); i++) {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[') {
            stack += s[i];
            TOP += 1;
        } else {
            if ( TOP!=-1 && ( (s[i]==')' && stack[TOP]=='(') || (s[i]==']' && stack[TOP]=='[') || (s[i]=='}' && stack[TOP]=='{') ) ) {
                    stack = stack.substr(0, TOP);
                    TOP--;
            } else {
                cout << "Invalid" << endl;
                return 0;
            }
        }
    }

    cout << (TOP==-1 ? "Valid" : "Invalid") << endl;

    return 0;
}