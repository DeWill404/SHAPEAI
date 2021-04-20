// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string s = "abccdba";

    // Check if it is palindrome
    int i=0;
    while (i < s.length()/2 && s[i]==s[s.length()-i-1]) {
        i++;
    }

    cout << (i == s.length()/2 ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}