class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int flag=0;
        for(int i=0;i<=num;i++){
            int d=i;
            string s=to_string(i);
            reverse(s.begin(),s.end());
            int c=stoll(s);
            if(d+c==num){
                flag=1;
                break;
            }
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};