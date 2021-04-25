// https://www.geeksforgeeks.org/convert-sentence-equivalent-mobile-numeric-keypad-sequence/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    string s = "GEEKSFORGEEKS";

    string opt = "";
    for(int i=0; i<s.length(); i++) {
        // Enter space
        if (s[i] == ' ')
            opt += '0';
        else {
            // Get char index
            int index = s[i] - 'A';
            int num = 0;
            // Set click times to 1 if S or Z in clicked else 0
            int times = (index==18 || index==25);

            // Reduce number of btn press 1 one on 7th & pth btn
            if (index >= 18)    index--;
            if (index == 24)    index--;

            // Get number of btn & times it is pressed
            num = index/3 + 2;
            times += index%3 + 1;
            for(int j=0; j<times; j++)
                opt += num + '0';
        }
    }

    // OPT
    cout << opt << endl;

    return 0;
}