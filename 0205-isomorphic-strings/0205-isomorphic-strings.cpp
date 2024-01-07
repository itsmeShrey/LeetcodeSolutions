class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m,m1;
        for(int i=0;i<s.length();i++){
            m[t[i]]=s[i];
            m1[s[i]]=t[i];
        }
        for(int i=0;i<s.length();i++){
            if(m[t[i]]!=s[i]||m1[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};