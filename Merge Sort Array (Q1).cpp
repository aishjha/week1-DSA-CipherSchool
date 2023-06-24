#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();

    arr1.resize(m + n);
    int i = m - 1, j = n - 1, k = m + n - 1;

    while( i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        }
        else {
            arr1[k] = arr2[j];
            j--;
        }

        k--;
    }

    while(j >= 0) {
        arr1[k] = arr2[j];
        k--;
        j--;
    }
}

int main() {
    vector<int> arr1 = {5, 6, 8};
    vector<int> arr2 = {1, 2, 4};

    mergeArrays(arr1, arr2);

    for(auto x: arr1)
        cout<<x<<" ";
    
    return 0;
}