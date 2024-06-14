class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& v) {
        vector<vector<int>>ans;
        vector<int>temp[v.size()+1];
        for(int i=0;i<v.size();i++){
            temp[v[i]].push_back(i);
            if(temp[v[i]].size()==v[i]){
                ans.push_back(temp[v[i]]);
                temp[v[i]].clear();
            }
        }
        return ans;
    }
};