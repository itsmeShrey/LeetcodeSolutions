class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<=9;i++){
            m[i]=mapping[i];
        }
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++){
            string s1;
            s1=to_string(nums[i]);
            string s2;
            for(int j=0;j<s1.length();j++){
                s2+=to_string(m[(s1[j]-'0')]);
            }
            p.push_back({stoi(s2),stoi(s1)});
        }
        sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
        vector<int>v;
        for(auto l:p){
            v.push_back(l.second);
        }
        return v;
    }
};