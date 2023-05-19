class Solution {
public:
    void solve(int index,vector<int>arr,vector<int>output,vector<vector<int>>&ans){
        if(index>=arr.size()){
            ans.push_back(output);
            return;
        }
        solve(index+1,arr,output,ans);
        
        output.push_back(arr[index]);
        solve(index+1,arr,output,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        solve(0,nums,output,ans);

        set<vector<int>>s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }

        ans.clear();
        for(auto &str:s){
            ans.push_back(str);
        }
        return ans;
    }
};