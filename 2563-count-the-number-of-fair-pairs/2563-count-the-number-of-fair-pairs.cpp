class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        //Naive approach lekin Time Limit aayega
        vector<int>v;
        v=nums;long long int count=0;
        // for(int i=0;i<v.size();i++){
        //     for(int j=i+1;j<v.size();j++){
        //         if((v[i]+v[j])>=lower && (v[i]+v[j])<=upper){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        long long ans=0;
        sort(v.begin(),v.end());
        for (int i = 0; i < v.size() - 1; i++) {
            auto up = upper_bound(v.begin() + i + 1, v.end(), upper - v[i]);
            auto low = lower_bound(v.begin() + i + 1, v.end(), lower - v[i]);
            ans += (up - low);
        }
        return ans;
    }
};