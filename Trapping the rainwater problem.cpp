#include<bits/stdc++.h>
using namespace std;

int rainWater(vector<int> heights) {
    vector<int> lheight;
    vector<int> rheight(heights.size());
    int maxHeight = INT_MIN, ans = 0;

    for(int height: heights) {
        maxHeight = max(maxHeight, height);
        lheight.push_back(maxHeight);
    }
    cout<<endl;
    maxHeight = INT_MIN;
    for(int i = heights.size() - 1; i >= 0; i--) {
        maxHeight = max(maxHeight, heights[i]);
        rheight[i] = maxHeight;
    }

    for(int i = 0; i < heights.size(); i++) {
        ans += max(min(lheight[i], rheight[i]) - heights[i], 0);
    }
    return ans;
}


int main() {
    vector<int> heights = {1, 2, 5, 3, 5, 10, 1};
    cout<<rainWater(heights);
    return 0;
}