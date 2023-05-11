class Solution {
public:
    int minMoves(vector<int>& nums) {
        vector<int>v;
        v=nums;
        sort(v.begin(),v.end());
        int sum=0;
        int c=*min_element(v.begin(),v.end());
        for(int i=0;i<=v.size()-1;i++){
            sum+=abs(v[i]-c);
        }
        return sum;
    }
};