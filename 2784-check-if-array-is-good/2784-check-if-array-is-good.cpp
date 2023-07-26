class Solution {
public:
    bool isGood(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        v=nums;int flag=0;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        int c=*max_element(v.begin(),v.end());
        for(auto l:m){
            if((l.second==1 && l.first!=c && v.size()-1==c) || (l.second==2 && l.first==c && v.size()-1==c)){
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