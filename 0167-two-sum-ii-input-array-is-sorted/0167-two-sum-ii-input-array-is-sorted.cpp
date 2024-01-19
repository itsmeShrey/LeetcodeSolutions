class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int>v1;int n=v.size()-1;
        int low=0,high=n;
        while(low<high){
            int sum=v[low]+v[high];
            if(sum==target){
                v1.push_back(low+1);
                v1.push_back(high+1);
                break;
            }
            else if(sum>target){
                high=high-1;
            }
            else{
                low=low+1;
            }
        }
        return v1;
    }
};