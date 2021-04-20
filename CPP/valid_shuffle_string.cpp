// https://www.programiz.com/java-programming/examples/check-valid-shuffle-of-strings
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string s = "abbabccdc";
    string s1 = "abcdc";
    string s2 = "abbc";

    // Check if length is equal
    if (s1.length()+s2.length() != s.length()) {
        cout << "Invalid shuffle" << endl;
        return 0;
    }

    int i=0, j=0, k=0;
    int temp = 0;
    while ((i<s1.length() || j<s2.length()) && k<s.length()) {
        if (i<s1.length() && s1[i]==s[k])   // If char in s1
            i++;
        else if (j<s2.length() && s2[j]==s[k])  // If char in s2
            j++;
        else if (j+temp<s2.length() && s2[j+temp]==s[k]) { 
            i -= temp;  // It char sequence was in s2
            j += temp+1;//  but read from s1
        } else
            break;

        // If same char found, then increase len
        temp = s1[i-1] == s2[j+temp] ? temp+1 : 0;

        k++;
    }
    
    // OPT
    cout << (k==s.length() ? "Valid shuffle" : "Invalid shuffle") << endl;

    return 0;
}