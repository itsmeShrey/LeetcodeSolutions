class Solution {
public:
    int countHomogenous(string s) {
        int count=0;int c=0;
        for(int i=0;i<s.length();i++){
            if(i==0||(s[i]==s[i-1])){
                count++;
            }
            else{
                count=1;
            }
            c=(c+count)%1000000007;
        }
        return c%1000000007;
    }
};