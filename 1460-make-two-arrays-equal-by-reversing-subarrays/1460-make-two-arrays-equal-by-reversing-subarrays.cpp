class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>v;vector<int>v1;
        v=target;v1=arr;
        int flag=0;
        for(int i=0;i<v1.size();i++){
            int c=v1[i];
            int d=count(v.begin(),v.end(),c);
            int e=count(v1.begin(),v1.end(),c);
            vector<int>::iterator it;
            it=find(v.begin(),v.end(),c);
            if(it==v.end()||d!=e){
                flag=1;
                break;
            }
        }
        if(flag==1){
            return false;
        }
        else{
            return true;
        }
    }
};