class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int c=v.size();
        sort(v.begin(),v.end());
        vector<vector<int>>v1;
        set<vector<int>>s;
        for (int i = 0; i < c - 1; i++) {
        int l = i + 1;
        int r = c - 1;
        int x = v[i];
            while (l < r) {
                if (x + v[l] + v[r] == 0) {
                    vector<int>v2;
                    v2.push_back(x);v2.push_back(v[l]);v2.push_back(v[r]);
                    s.insert(v2);
                    l++;
                    r--;
                }
                else if (x + v[l] + v[r] < 0)
                    l++;
                else
                    r--;
            }
        }
        for(auto &str:s){
            v1.push_back(str);
        }
        return v1;
    }
};