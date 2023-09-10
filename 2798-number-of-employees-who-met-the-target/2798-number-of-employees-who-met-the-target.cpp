class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        vector<int>v;
        v=hours;int count=0;
        for(auto l:v){
            if(l>=target){
                count++;
            }
        }
        return count;
    }
};