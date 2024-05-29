class Solution {
public:
    int numSteps(string s) {
        int flag=0;int count=0;
        while(s!="1"){
            if(s[s.length()-1]=='0'){
                s.pop_back();
            }
            else{
                flag=0;
                for(int i=s.length()-1;i>=0;i--){
                    if(s[i]=='1'){
                        s[i]='0';
                    }
                    else{
                        s[i]='1';
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    s='1'+s;
                }
            }
            count++;
        }
        return count;
    }
};