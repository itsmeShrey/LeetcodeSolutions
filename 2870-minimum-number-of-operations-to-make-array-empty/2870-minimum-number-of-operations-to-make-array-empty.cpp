class Solution {
public:
    int minOperations(vector<int>& v) {
        map<int,int>m;
        for(auto l:v){
            m[l]++;
        }
        int sum=0;
        for(auto l:m){
            cout<<l.first<<" "<<l.second<<endl;
        }
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