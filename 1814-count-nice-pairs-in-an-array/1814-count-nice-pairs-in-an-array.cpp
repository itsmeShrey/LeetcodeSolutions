class Solution {
public:
    int mod=1e9+7; 
    int countNicePairs(vector<int>& nums) {
        vector<int>v;
        v=nums;
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            int c=v[i];int rem=0,rev=0;
            while(c>0){
                rem=c%10;
                rev=rev*10+rem;
                c=c/10;
            }
            v1.push_back(rev);
        }
        vector<int>v2;
        for(long long int i=0;i<v1.size();i++){
            v2.push_back(v[i]-v1[i]);
        }
        map<long int,long int>m;long long int count=0;
        for(auto l:v2){
            cout<<l <<" ";
        }
        for(auto l:v2){
            m[l]++;
        }
        for(auto l:m){
            count+=((l.second*(l.second-1))/2);
        }
        return count%mod;
    }
};