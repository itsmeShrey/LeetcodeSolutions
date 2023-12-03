class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";int letter;
        while(n>0){
            letter=min(26,k-n+1);
            s+=char(letter+int('a')-1);
            k-=letter;
            n-=1;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};