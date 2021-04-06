// https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1
#include <bits/stdc++.h>
using namespace std;

// Check if number is palindrome or not
bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    // DATA
    int n = 5;
    int arr[] = {111, 222, 333, 444, 555};

    // Check if all number is palindrome
    for(int i=0; i<n; i++)
        if (!isPalindrome(arr[i])) {
            cout << "Not" << endl;
            return 0;
        }

    cout << "Yes" << endl;
    return 0;
}