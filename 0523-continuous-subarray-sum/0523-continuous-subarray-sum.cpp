class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> modIndexMap;
        modIndexMap[0] = -1;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            int mod = sum % k;
            if (modIndexMap.count(mod)) {
                if (i - modIndexMap[mod] >= 2) return true;
            } else {
                modIndexMap[mod] = i;
            }
        }
        return false;
    }
};