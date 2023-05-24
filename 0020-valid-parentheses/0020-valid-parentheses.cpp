class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        s1.push('.');
        int i=0;
        while(i!=s.length()){
            if(s[i]=='['|| s[i]=='('|| s[i]=='{'|| s1.top()=='.'){
                s1.push(s[i]);
            }
            else if(s[i]==']'){
                if(s1.top()=='['){
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
            }
            else if(s[i]=='}'){
                if(s1.top()=='{'){
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
            }
            else if(s[i]==')'){
                if(s1.top()=='('){
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
            }
            i++;
        }
        if(s1.top()=='.'){
            return true;
        }
        else{
            return false;
        }
    }
};