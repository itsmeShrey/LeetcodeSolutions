class Solution {
public:
    int maxDepth(string s) {
        stack<char>s1;
        s1.push('.');int c=0;
        int i=0;int count=0;
        while(i!=s.length()){
            if(s[i]=='('){
                s1.push(s[i]);
                count++;
            }
            else if(s[i]==')'){
                s1.pop();
                c=max(c,count);
                count--;
            }
            i++;
        }
        return c;
    }
};