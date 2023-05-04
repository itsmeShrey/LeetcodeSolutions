class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>v;
        v=nums;
        set<int>s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        for(int i=0;i<v.size();i++){
            string s1=to_string(v[i]);
            reverse(s1.begin(),s1.end());
            long long int c=stoi(s1);
            s.insert(c);
        }
        int c=s.size();
        return c;
    }
};