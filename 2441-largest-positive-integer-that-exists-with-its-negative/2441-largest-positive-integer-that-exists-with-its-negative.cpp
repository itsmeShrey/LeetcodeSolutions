class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int>v;int flag=0;
        v=nums;
        sort(v.begin(),v.end(),greater<int>());
        int c;
        for(int i=0;i<v.size();i++){
            c=v[i];
            vector<int>::iterator it;
            it=find(v.begin(),v.end(),-v[i]);
            if(it!=v.end()){
                c=v[i];
                flag=1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag==1){
            return c;
        }
        else{
            return -1;
        }
    }
};