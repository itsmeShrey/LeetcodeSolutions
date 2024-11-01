class Solution {
public:
    string makeFancyString(string s) {
        string s1;
        s1+=s[0];
        for(int i=1;i<s.length()-1;i++){
            if(s[i]==s[i-1] && s[i]==s[i+1]){
                continue;
            }
            else{
                s1+=s[i];
            }
        }
        if(s.length()!=1){
            s1+=s[s.length()-1];
        }
        return s1;
    }
};
