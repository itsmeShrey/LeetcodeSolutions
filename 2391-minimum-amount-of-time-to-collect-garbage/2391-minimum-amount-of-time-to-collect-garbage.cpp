class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<string>v1;vector<int>v2;
        v1=garbage;v2=travel;
        vector<int>v;int time=0;int a=0,b=0,d=0;
        for(int i=0;i<v1.size();i++){
            int c=v1[i].length();
            time+=c;
            string s=v1[i];
            if(v1[i].find('G')!=v1[i].npos){
                a=i;
            }
            if(v1[i].find('P')!=v1[i].npos){
                b=i;
            }
            if(v1[i].find('M')!=v1[i].npos){
                d=i;
            }
        }
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<a;i++){
            sum1+=v2[i];
        }
        for(int i=0;i<b;i++){
            sum2+=v2[i];
        }
        for(int i=0;i<d;i++){
            sum3+=v2[i];
        }
        cout<<a<<" "<<b<<" "<<d<<endl;
        int total=time+sum1+sum2+sum3;
        cout<<total<<" "<<time<<" "<<sum1<<" "<<sum2<<" "<<sum3;
        return total;
    }
};