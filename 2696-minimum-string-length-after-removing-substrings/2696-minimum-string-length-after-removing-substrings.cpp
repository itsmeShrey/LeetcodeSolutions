class Solution {
public:
    int minLength(string s) {
        stack<char>s1;
        s1.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!s1.empty()){
                if(s[i]=='B' && s1.top()=='A'){
                    s1.pop();
                }
                else if(s[i]=='D' && s1.top()=='C'){
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
            }
            else{
                s1.push(s[i]);
            }
        }
        int count=0;
        while(!s1.empty()){
            count++;
            s1.pop();
        }
        return count;
    }
};