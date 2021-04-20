// https://leetcode.com/problems/count-and-say/
#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n, string s) {
    string temp = "";

    int i=0;
    while (i < s.length()) {
        int j = i+1;
        while(j < s.length() && s[i]==s[j]) j++;
        temp += char(j-i + '0');
        temp += s[i];
        i = j;
    }

    return n>2 ? countAndSay(n-1, temp) : temp;
}

int main() {
    string s = "1";
    int n = 10;

    cout << countAndSay(n, s) << endl;

    return 0;
}