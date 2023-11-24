class Solution {
public:
    long long minimumSteps(string s) {
        long long int count1=0,count=0;
        for(int i=s.length()-1;i>=0;i--){
            if (s[i]=='0'){
                count1++;
            }
            else if(s[i]=='1'){
                count+=count1;
            }
        }
        return count;
    }
};