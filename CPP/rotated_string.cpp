// https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string s1 = "AABBCD";
    string s2 = "BCDAAB";

    if (s1.length() != s2.length()) {
        cout << "Not Rotated" << endl;
        return 0;
    }

    s1 += s1;
    cout << (s1.find(s2) != string::npos ? "Repeated" : "Not Repeated") << endl;

    return 0;
}