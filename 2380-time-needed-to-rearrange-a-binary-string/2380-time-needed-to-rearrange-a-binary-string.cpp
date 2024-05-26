class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int count=0;int flag=0;
        while(1){
            for(int i=0;i<s.length()-1;i++){
                if(s[i]=='0' && s[i+1]=='1'){
                    s[i]='1';
                    s[i+1]='0';
                    i++;
                    flag=1;
                }
            }
            if(flag==0){
                break;
            }
            else{
                count++;
                flag=0;
            }
        }
        return count;
    }
};