class Solution {
private:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int c,d;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                c=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(isPrime(nums[i])){
                d=i;
                break;
            }
        }
        return d-c;
    }
};