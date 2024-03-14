class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int startIndexForStrictlyGreater = 0;
        int startIndexForAtLeastGoal = 0;
        int sumForStrictlyGreater = 0; 
        int sumForAtLeastGoal = 0;
        int endIndex = 0;
        int countSubarrays = 0;
        int numSize = nums.size();
        while (endIndex < numSize) {
            sumForStrictlyGreater += nums[endIndex];
            sumForAtLeastGoal += nums[endIndex];
            while (startIndexForStrictlyGreater <= endIndex && sumForStrictlyGreater > goal) {
                sumForStrictlyGreater -= nums[startIndexForStrictlyGreater++];
            }
            while (startIndexForAtLeastGoal <= endIndex && sumForAtLeastGoal >= goal) {
                sumForAtLeastGoal -= nums[startIndexForAtLeastGoal++];
            }
            countSubarrays += startIndexForAtLeastGoal - startIndexForStrictlyGreater;
            ++endIndex;
        }
        return countSubarrays; 
    }
};
