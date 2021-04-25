// https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[] = {"aaa","bbb", "ccc", "bbb", "aaa", "aaa"};

    int first = 0;
    int seccond = 0;
    string fir = s[0];
    string sec = s[0];

    unordered_map<string, int> map;
    for(int i=0; i<6; i++) {
        map[s[i]]++;
        if (map[s[i]] > first && s[i]!=fir) {
            sec = fir;
            seccond = first;
            fir = s[i];
            first = map[s[i]];
        } else if (map[s[i]] > seccond && s[i]!=fir && s[i]!=sec) {
            sec = s[i];
            seccond = map[s[i]];
        }
    }

    cout << sec << endl;

    return 0;
}