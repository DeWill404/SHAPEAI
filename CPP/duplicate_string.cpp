// https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string s = "abcdabcdtcdox";

    // Set empty array
    int cnt[256];
    for(int i=0; i<256; i++)
        cnt[i] = 0;
    
    // Get count of all char
    for(int i=0; i<s.length(); i++)
        cnt[s[i]]++;

    // Print only repeated once
    for(int i=0; i<256; i++)
        if (cnt[i] > 1)
            cout << char(i) << " " << cnt[i] << endl;

    return 0;
}