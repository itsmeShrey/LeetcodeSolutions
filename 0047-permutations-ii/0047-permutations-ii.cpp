class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        do{
            s.insert(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        for(auto &str:s){
            v.push_back(str);
        }
        return v;
    }
};