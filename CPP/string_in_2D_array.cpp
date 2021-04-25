// https://www.geeksforgeeks.org/find-count-number-given-string-present-2d-character-array/
#include <bits/stdc++.h>
using namespace std;

int found(char arr[6][6], int x, int y, string s) {
    int f = 0;
    // Move UP
    if (x-s.length() >= 0) {
        int i = x;
        while(x-i<s.length() && arr[i][y]==s[x-i])
            i--;
        if (x-i == s.length())
            f++;
    }

    // Move LEFT
    if (y-s.length() >= 0) {
        int i = y;
        while(y-i<s.length() && arr[x][i]==s[y-i])
            i--;
        if (y-i == s.length())
            f++;
    }

    // Move DOWN
    if (x+s.length() <= 6) {
        int i = x;
        while(i-x<s.length() && arr[i][y]==s[i-x])
            i++;
        if (i+x == s.length())
            f++;
    }

    // Move Right
    if (y+s.length() <= 6) {
        int i = y;
        while(i-y<s.length() && arr[x][i]==s[i-y])
            i++;
        if (i-y == s.length())
            f++;
    }

    // Move TOP-LEFT
    if (x-s.length()>=0 && y-s.length()>=0) {
        int i=x, j=y;
        while(y-j<s.length() && arr[i][j]==s[y-j])
            { i--; j--; }
        if (y-j == s.length())
            f++;
    }

    // Move TOP-RIGHT
    if (x-s.length()>=0 && y+s.length()<=6) {
        int i=x, j=y;
        while(j-y<s.length() && arr[i][j]==s[j-y])
            { i--; j++; }
        if (j-y == s.length())
            f++;
    }

    // Move BOTTOM-RIGHT
    if (x+s.length()<=6 && y+s.length()<=6) {
        int i=x, j=y;
        while(j-y<s.length() && arr[i][j]==s[j-y])
            { i++; j++; }
        if (j-y == s.length())
            f++;
    }

    // Move BOTTOM-LEFT
    if (x+s.length()<=6 && y-s.length()>=0) {
        int i=x, j=y;
        while(y-j<s.length() && arr[i][j]==s[y-j])
            { i++; j--; }
        if (y-j == s.length())
            f++;
    }

    return f;
}

int main () {
    // DATA
    string s = "GEEK";
    char a[6][6] = {
            {'D','D','D','G','D','D'},
            {'B','S','D','E','B','S'},
            {'B','S','K','E','K','K'},
            {'D','D','G','E','E','K'},
            {'D','D','E','D','E','E'},
            {'D','E','K','E','E','A'}
        };

    int cnt = 0;
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            cnt += found(a, i, j, s);

    cout << cnt << endl;

    return 0;
}