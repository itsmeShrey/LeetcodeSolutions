class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(auto l:nums){
            m[l]++;
        }
        int c=INT_MIN;
        for(auto l:m){
            c=max(c,l.second);
        }
        int sum=0;
        for(auto l:m){
            if(l.second==c){
                sum+=l.second;
            }
        }
        return sum;
        
    }
};