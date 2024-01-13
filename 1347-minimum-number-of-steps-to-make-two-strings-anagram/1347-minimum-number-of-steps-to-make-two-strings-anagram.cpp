class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(26,0);
        for(auto l:s){
            v[l-'a']++;
        }
        for(auto l:t){
            v[l-'a']--;
        }
        int sum=0;
        for(auto l:v){
            sum+=abs(l);
        }
        return sum/2;
    }
};