class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int count=0,count1=0,count2=0;
        for(int i=0;i<s.length();i++){
            count1=0;count2=0;
            for(int j=i;j<s.length();j++){
                if(s[j]=='a'|| s[j]=='e'||s[j]=='o'||s[j]=='i'||s[j]=='u'){
                    count1++;
                }
                else{
                    count2++;
                }
                if(count1==count2 && (count1*count2)%k==0){
                    count++;
                }
            }
        }
        return count;
    }
};