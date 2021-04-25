// https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1
#include <bits/stdc++.h>
using namespace std;

// DP array to store cnt
long long int dp[100][100];

// Recursive counter
long long int count_palindrome(string s,int start,int end) {
    // If not palindrome
    if(start > end)
        return 0;

    // If palindrome
    if(start == end)
        return 1;

    // if dp index is visited
    if(dp[start][end] != -1)
        return dp[start][end];

    // If till current index, it is palindrome
    if(s[start] == s[end])
        return dp[start][end] = 1 +
                                count_palindrome(s,start+1,end) + 
                                count_palindrome(s,start,end-1);
    // If current index is not palindrome
    else
        return dp[start][end] = count_palindrome(s,start+1,end) +
                                count_palindrome(s,start,end-1) -
                                count_palindrome(s,start+1,end-1);
}

int main() {
    // data
    string s = "aabaaaabaaaabaaaabaaaabaaaabaaaabaaaabaa";

    // Set -1 in DP array
    memset(dp, -1, sizeof(dp));

    // count sub sequence
    cout << count_palindrome(s, 0, s.length()-1) << endl;

    return 0;
}