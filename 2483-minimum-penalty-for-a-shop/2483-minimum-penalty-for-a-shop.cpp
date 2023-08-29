class Solution {
public:
    int bestClosingTime(string customers) {
        string s;
        s=customers;
        int a=count(s.begin(),s.end(),'Y');
        int c=a,d=a,time=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y'){
                c--;
            }
            else{
                c++;
            }
            if(c<d){
                time=i+1;
                d=c;
            }
        }
        return time;
    }
};