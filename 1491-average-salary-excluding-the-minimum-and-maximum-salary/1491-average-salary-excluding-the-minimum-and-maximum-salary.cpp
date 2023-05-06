class Solution {
public:
    double average(vector<int>& salary) {
        vector<int>v;
        v=salary;
        int c=*max_element(v.begin(),v.end());
        int d=*min_element(v.begin(),v.end());
        int sum=0;int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==c||v[i]==d){
                continue;
            }
            else{
                sum+=v[i];
                count++;
            }
        }
        double e=double(sum)/double(count);
        return e;
    }
};