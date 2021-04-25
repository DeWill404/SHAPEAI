// https://leetcode.com/problems/longest-common-prefix/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string str[] = {"dog","racecar","car"};

    // OUTPUT string
    string pre = "";
    // Length of common string
    int i = 0;

    // While condition is true
    bool valid = true;
    while(valid) {
        for(int j=0; j<3; j++) {
            // If any small string found
            if (i >= str[j].length()) {
                valid = false;
                break;
            }
            // If any string inequality found
            else if (j>0 && i<str[j-1].length() && str[j][i] != str[j-1][i]) {
                valid = false;
                break;
            }
        }
        i++;
    }

    cout << str[0].substr(0, i-1) << endl;

    return 0;
}