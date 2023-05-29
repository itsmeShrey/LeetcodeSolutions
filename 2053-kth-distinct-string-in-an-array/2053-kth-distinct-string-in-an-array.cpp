class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>v;
        v=arr;
        map<string,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        int count=0;int flag=0;
        string s;
        for(int i=0;i<v.size();i++){
            if(m[v[i]]==1){
                count++;
                if(count==k){
                    flag=1;
                    s=v[i];
                    break;
                }
            }
        }
        if(flag==1){
            return s;
        }
        else{
            return "";
        }
    }
};