class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && s1.size()==0){
                continue;
            }
            if(s[i]=='#' && s1.size()!=0){
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && s2.size()==0){
                continue;
            }
            if(t[i]=='#' && s2.size()!=0){
                s2.pop();
            }
            else{
                s2.push(t[i]);
            }
        }
        if(s1==s2){
            return true;
        }
        else{
            return false;
        }
    }
};