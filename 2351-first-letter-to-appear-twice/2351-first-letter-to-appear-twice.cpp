class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>m;char c;
        for(int i=0;i<s.length();i++){
            m[s[i]]+=1;
            if(m[s[i]]==2){
                c=s[i];
                break;
            }
        }
        return c;
    }
};