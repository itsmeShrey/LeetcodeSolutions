class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        vector<int>v;
        v=satisfaction;
        sort(v.begin(),v.end());int count=v.size()-1;
        int sum=0;
        for(int i=v.size()-1;i>=0;i--){
            if(sum+v[i]<0){
                break;
            }
            else{
                sum+=v[i];
                count--;
            }
        }
        int c=1;int sum1=0;
        for(int i=count+1;i<v.size();i++){
            sum1+=(c*v[i]);
            c++;
        }
        return sum1;
    }
};