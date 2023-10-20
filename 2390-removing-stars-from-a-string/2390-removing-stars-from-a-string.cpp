class Solution {
public:
    string removeStars(string s) {
        stack<char>s1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*' && s1.size()==0){
                continue;
            }
            if(s[i]=='*' && s1.size()!=0){
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        string s2;
        while(s1.size()!=0){
            s2+=s1.top();
            s1.pop();
        }
        reverse(s2.begin(),s2.end());
        return s2;
        
    }
};