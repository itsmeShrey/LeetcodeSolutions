class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        vector<int>v;
        v=tasks;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        int sum=0;
        for(auto l:m){
            if(l.second==1){
                return -1;
            }
            else{
                sum+=ceil(double(l.second)/3);
            }
        }
        return sum;
    }
};