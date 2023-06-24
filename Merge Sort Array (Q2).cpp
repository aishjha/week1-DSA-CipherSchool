#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> arr, int el) {
    int ans = -1, l = 0, h = arr.size() - 1;

    while(l <= h) {
        int mid = l + (h - l) / 2;
        
        if(arr[mid] == el) {
            ans = mid;
            h = mid -1;
        }

        else if(arr[mid] > el)
            h = mid - 1;

        else
            l = mid + 1;
    }
    return ans;
}

int lastOccurence(vector<int> arr, int el) {
    int ans = -1, l = 0, h = arr.size() - 1;

    while(l <= h) {
        int mid = l + (h - l) / 2;
        
        if(arr[mid] == el) {
            ans = mid;
            l = mid + 1;
        }

        else if(arr[mid] > el)
            h = mid - 1;

        else
            l = mid + 1;
    }
    return ans;
}

vector<int> firstAndLastOccurence(vector<int> arr, int el) {
    vector<int> ans(2);
    ans[0] = firstOccurence(arr, el);
    ans[1] = lastOccurence(arr, el);

    return ans;
}

int main() {
    vector<int> arr = {1,2,3,3,3,5};
    vector<int> ans = firstAndLastOccurence(arr, 3);

    for(auto x: ans)
        cout<<x<<" ";
    
    return 0;
}