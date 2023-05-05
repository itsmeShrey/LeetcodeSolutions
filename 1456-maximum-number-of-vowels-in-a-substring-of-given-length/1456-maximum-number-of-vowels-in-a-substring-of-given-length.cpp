class Solution {
public:
    int maxVowels(string s, int k) {
        int c=INT_MIN;int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count+=1;
            }
            else{
                count+=0;
            }
            if(i>=k){
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                    count-=1;
                }
                else{
                    count-=0;
                }
            }
            c=max(c,count);
        }
        return c;
    }
};