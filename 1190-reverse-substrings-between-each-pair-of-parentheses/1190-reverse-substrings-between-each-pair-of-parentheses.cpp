class Solution {
public:
    string reverseParentheses(string s1) {
        stack<int>s;
        vector<int>v(s1.length());
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='('){
                s.push(i);
            }
            if(s1[i]==')'){
                int c=s.top();
                s.pop();
                v[i]=c;
                v[c]=i;
            }
        }
        string s2;int direction=1;
        for(int i=0;i<s1.length();i+=direction){
            if(s1[i]==')'||s1[i]=='('){
                i=v[i];
                direction=-direction;
            }
            else{
                s2+=s1[i];
            }
        }
        return s2;

    }
};