class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            string s=nums[i];int c=s.length();
            for(int j=0;j<nums.size();j++){
                string s1=nums[j];int d=s1.length();

                if(c+d==target.length() && j!=i){
                    if((s+s1)==target){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};