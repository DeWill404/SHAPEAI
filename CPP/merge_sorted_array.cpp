// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
#include <bits/stdc++.h>
using namespace std;


/* Function to select btn left & right array */
int select(int arr1[], int arr2[], int btn, int index) {
    return index < btn ? arr1[index] : arr2[index-btn];
}


/* Function to swap within or btn arr1 & arr2 */
void swapValue(int arr1[], int n1, int arr2[], int s, int e) {
    swap( (s<n1?arr1[s]:arr2[s-n1]), (e<n1?arr1[e]:arr2[e-n1]) );
}


/* Function move pivot to its correct place */
int insertPivot(int arr1[], int n1, int arr2[], int e, int p, int i) {
    if (i < n1 && e < n1) {
        arr1[i] = arr1[e];
        arr1[e] = p;
    } else if (i < n1 && e >= n1) {
        arr1[i] = arr2[e-n1];
        arr2[e-n1] = p;
    } else {
        arr2[i-n1] = arr2[e-n1];
        arr2[e-n1] = p;
    }
    return e;
}

/* HOARSE PARTITION */
int partition(int arr1[], int n1, int arr2[], int s, int e) {
    int index = s;
    int pivot = s<n1 ? arr1[index] : arr2[index-n1];

    while (s < e) {
        while(s<e && select(arr1, arr2, n1, s)<=pivot)
            s++;

        while(pivot < select(arr1, arr2, n1, e))
            e--;

        if (s < e)
            swapValue(arr1, n1, arr2, s, e);
    }
    return insertPivot(arr1, n1, arr2, e, pivot, index);
}

/* QUICK SORT */
void quickSort(int arr1[], int n1, int arr2[], int s, int e) {
    if (s < e) {
        int index = partition(arr1, n1, arr2, s, e);

        quickSort(arr1, n1, arr2, s, index-1);
        quickSort(arr1, n1, arr2, index+1, e);
    }
}

int main() {
    int n1 = 4;
    int arr1[] = {1, 10, 13, 20};
    int n2 = 5;
    int arr2[] = {0, 2, 6, 8, 9};

    quickSort(arr1, n1, arr2, 0, n1+n2-1);

    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    cout << endl;
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}