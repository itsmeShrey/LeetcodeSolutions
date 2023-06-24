class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int>v;
        v=arr;
        int c=v.size()/2;
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            m[v[i]]+=1;
        }
        vector<int>v1;
        for(auto l:m){
            v1.push_back(l.second);
        }
        sort(v1.begin(),v1.end(),greater<int>());
        int sum=0,count=0;
        for(int i=0;i<v1.size();i++){
            if(sum<c){
                sum+=v1[i];
                count++;
            }
        }
        return count;
    }
};