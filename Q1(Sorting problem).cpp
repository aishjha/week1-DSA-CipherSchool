#include<bits/stdc++.h>
using namespace std;

void colorSort(vector<int>& arr) {
    int num0 = 0, num1 = 0;

    for(int num: arr) {
        if(num == 0)        num0++;
        else if(num == 1)   num1++;
    }

    for(int& num: arr) {
        if(num0-- > 0)  num = 0;
        else if(num1-- > 0) num = 1;
        else num = 2;
    }
}



int main() {
    vector<int> arr = {2,1,2,0,0,0,1,1,2,2};
    colorSort(arr);
    for(auto x: arr)
        cout<<x<<" ";
    
    return 0;
}