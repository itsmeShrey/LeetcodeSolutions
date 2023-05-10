class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int flag=0;
        for(int i=2;i<=n-2;i++){
            string s,temp;
            int a=i;
            while(a>0){
                s+=to_string(a%i);
                a=a/i;
            }
            temp=s;
            reverse(s.begin(),s.end());
            if(s==temp){
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            return true;
        }
        else{
            return false;
        }
    }
};