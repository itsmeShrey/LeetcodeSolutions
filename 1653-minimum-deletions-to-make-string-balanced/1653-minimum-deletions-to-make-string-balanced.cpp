class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>s1;int count=0;
        for(int i=0;i<s.length();i++){
            if(!s1.empty() && s1.top()=='b' && s[i]=='a'){
                s1.pop();
                count++;
            }
            else{
                s1.push(s[i]);
            }
        }
        return count;
    }
};