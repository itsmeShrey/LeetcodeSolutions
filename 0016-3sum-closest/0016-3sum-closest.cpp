class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        vector<int>v;
        v=nums;
        int c=v.size();
        sort(v.begin(),v.end());
        int sum=0;
        int closest=v[0]+v[1]+v[2];
        for (int i = 0; i < c - 1; i++) {
        int l = i + 1;
        int r = c - 1;
        int x = v[i];
            while (l < r) {
                if (x + v[l] + v[r] == target ) {
                    sum=x + v[l] + v[r];
                    return sum;
                }
                if (abs(target - (x + v[l] + v[r])) < abs(target - closest)) {
                    closest = x + v[l] + v[r];
                    }
                if (target < (x + v[l] + v[r])) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        return closest;
    }
};