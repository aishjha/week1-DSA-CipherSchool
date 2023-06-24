#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int h) {
    vector<int> left(arr.begin() + l, arr.begin() + mid + 1);
    vector<int> right(arr.begin() + mid + 1, arr.end());

    int i = 0, j = 0, k = l;
    while(i < left.size() && j < right.size()) {
        if(left[i] < right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < left.size()) {
        arr[k] = left[i];
        k++;
        i++;
    }

    while(j < right.size()) {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void mergeSort(vector<int>& arr, int l, int h) {
    if(l >= h)
        return;

    int mid = (l + h) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}