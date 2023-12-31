class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int>m;
        int c=-1;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==0){
                m[s[i]]=i+1;
            }
            else{
                int d=i-m[s[i]];
                c=max(c,d);
            }
        }
        return c;
    }
};