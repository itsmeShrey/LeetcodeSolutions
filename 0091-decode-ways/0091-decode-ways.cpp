class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0 || s[0]=='0'){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        int count1=1,count2=1;
        for(int i=1;i<s.length();i++){
            int c=s[i]-48;
            int d=(s[i-1]-48)*10+c;
            int count=0;
            if(c>0){
                count+=count2;
            }
            if(d>=10 && d<=26){
                count+=count1;
            }
            count1=count2;
            count2=count;
        }
        return count2;
    }
};