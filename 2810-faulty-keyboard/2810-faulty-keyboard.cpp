class Solution {
public:
    string finalString(string s) {
        string s1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='i'){
                reverse(s1.begin(),s1.end());
            }
            else{
                s1+=s[i];
            }
        }
        return s1;
    }
};