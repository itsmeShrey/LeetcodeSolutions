class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,bool> m;
        int maxi = *max_element(nums.begin(), nums.end());
        for(auto l : nums){
            m[l] = true;
        }
        for(int i=1; i<maxi; i++){
            if(m.find(i) == m.end())
                return i;
        }
        return maxi < 0 ? 1 : maxi+1;
    }
};