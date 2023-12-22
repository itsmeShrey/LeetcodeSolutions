class Solution {
public:
    int maxScore(string s) {
        int c=INT_MIN;int d=count(s.begin(),s.end(),'1');int e=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='1'){
                d--;
            }
            else if(s[i]=='0'){
                e++;
            }
            c=max(c,(d+e));
        }
        return c;
    }
};