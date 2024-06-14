class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]=i;
        }
        for(int i=0;i<t.length();i++){
            m[t[i]]=abs(m[t[i]]-i);
        }
        int sum=0;
        for(auto l:m){
            sum+=l.second;
        }
        return sum;
    }
};