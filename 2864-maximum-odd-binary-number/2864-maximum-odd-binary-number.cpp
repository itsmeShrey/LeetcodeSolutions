class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=count(s.begin(),s.end(),'0');
        int d=count(s.begin(),s.end(),'1');
        string s1;
        for(int i=0;i<d-1;i++){
            s1+='1';
        }
        for(int i=0;i<c;i++){
            s1+='0';
        }
        s1+='1';
        return s1;
    }
};