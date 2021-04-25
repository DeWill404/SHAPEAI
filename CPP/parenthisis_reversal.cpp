// https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Data
    string s = "{{{{{}{}}}";

    // For odd len, pair cant be formed
    if ( s.length()%2 ) {
        cout << -1 << endl;
        return 0;
    }

    // open braces cnt
    int open_cnt = 0;

    // Reverse cnt
    int reverse_cnt = 0;
    for(int i=0; i< s.length(); i++) {
        if (s[i]=='{')    // Push to top
            open_cnt++;
        else {    // Pop or Push
            // Pair found, POP from stack
            if ( open_cnt != 0 )
                open_cnt--;
            // Reverse braces
            else {
                open_cnt++;
                reverse_cnt++;
            }
        }
    }

    cout << ceil(open_cnt/2) + reverse_cnt << endl;

    return 0;
}