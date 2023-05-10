class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<string>v;
        v=bank;

        int c1=0;int sum=0;
        int d=0;
        for(int i=0;i<v.size();i++){
            string s=v[i];
            int c=count(s.begin(),s.end(),'1');//2
            if(c1==0 && c!=0){
                d=c;
                c1++;//1
                continue;
            }
            else{
                sum+=(d*c);//0
                if((d*c)!=0){
                    d=c;
                }
            }
        }
        return sum;
    }
};