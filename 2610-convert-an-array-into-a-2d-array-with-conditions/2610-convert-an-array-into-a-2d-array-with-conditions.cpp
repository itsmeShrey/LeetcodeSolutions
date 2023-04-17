class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int>v;
        v=nums;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        int c=INT_MIN;
        for(auto l:m){
            c=max(c,l.second);
        }
        vector<vector<int>>v1(c);//specifying the number of rows required
        for(auto l:m){
            int i=0;
            while(l.second!=0){
                v1[i].push_back(l.first);
                l.second--;
                i++;
            }
        }
        return v1;
    }
};