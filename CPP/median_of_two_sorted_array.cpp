// https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // DATA
    int arr1[] = {2, 3, 5, 8};
    int n1 = 4;
    int arr2[] = {10, 12, 14, 16, 18, 20};
    int n2 = 6;

    // Mid elment ptr & value
    int mid = (n1 + n2)/2;
    int midEle = 0;
    int mid_1Ele = 0;

    int i = 0;  // ptr to check if mid position reached
    int ptr1 = 0;   // ptr pointing as curr position in arr1
    int ptr2 = 0;   // ptr pointing as curr position in arr2

    // Find mid & mid-1 value in both array till end of array
    while (i<=mid && ptr1<n1 && ptr2<n2) {
        if (arr1[ptr1] < arr2[ptr2]) {
            if (i == mid-1)
                mid_1Ele = arr1[ptr1];
            else if (i == mid)
                midEle = arr1[ptr1];
            ptr1++;
        } else {
            if (i == mid-1)
                mid_1Ele = arr2[ptr2];
            else if (i == mid)
                midEle = arr2[ptr2];
            ptr2++;
        }
        i++;
    }

    // arr2 is over, then mid is in arr1
    while(ptr1<n1 && i<=mid) {
        if (i == mid-1)
            mid_1Ele = arr1[ptr1];
        else if (i == mid)
            midEle = arr1[ptr1];
        ptr1++;
        i++;
    }

    // arr1 is over, then mid is in arr2
    while (ptr2<n2 && i<=mid) {
        if (i == mid-1)
            mid_1Ele = arr2[ptr2];
        else if (i == mid)
            midEle = arr2[ptr2];
        ptr2++;
        i++;
    }
    
    // OUTPUT
    cout << ((n1+n2)%2 ? midEle : (midEle+mid_1Ele)/2) << endl;

    return 0;
}