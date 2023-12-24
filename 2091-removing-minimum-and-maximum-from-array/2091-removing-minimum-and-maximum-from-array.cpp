class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        auto c=max_element(nums.begin(),nums.end());
        auto d=min_element(nums.begin(),nums.end());
        int e=distance(nums.begin(),c)+1;
        int f=distance(nums.begin(),d)+1;
        int g=abs(distance(nums.end(),c));
        int h=abs(distance(nums.end(),d));
        int right=min(e,f)+(e+f-2*min(e,f));
        int left=min(g,h)+(g+h-2*min(g,h));
        int own=min(e,g)+min(f,h);
        int mini=min({right,left,own});
        
        return mini;
    }
};