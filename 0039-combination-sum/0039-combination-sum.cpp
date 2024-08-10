class Solution {
public:
    void f(int i,vector<int>&candidates,int target,vector<vector<int>>&v,vector<int>&v1){
        if(i==candidates.size()){
            if(target==0){
                v.push_back(v1);
            }
            return;
        }
        if(target>=candidates[i]){
            v1.push_back(candidates[i]);
            f(i,candidates,target-candidates[i],v,v1);
            v1.pop_back();
        }
        f(i+1,candidates,target,v,v1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>v1;
        f(0,candidates,target,v,v1);
        return v;
    }
};