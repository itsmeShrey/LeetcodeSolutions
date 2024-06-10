class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        v=heights;
        vector<int>v1;
        v1=heights;
        int count=0;
        sort(v1.begin(),v1.end());
        for(int i=0;i<heights.size();i++){
            if(v[i]==v1[i]){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};