class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            int c=s[i];
            int d=s[i+1];
            sum+=abs(c-d);
        }
        return sum;
    }
};