class Solution {
public:
    string clearDigits(string s) {
        stack<char>s1;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                s1.push(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9'){
                while(true){
                    char c=s1.top();
                    s1.pop();
                    if(c>='a' && c<='z'){
                        break;
                    }
                }
            }
        }
        string s2="";
        while(!s1.empty()){
            s2+=s1.top();
            s1.pop();
        }
        reverse(s2.begin(),s2.end());
        return s2;
    }
};