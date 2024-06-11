class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v2;vector<int>v1;
        v1=arr1;v2=arr2;
        vector<pair<int,int>>p;
        for(int i=0;i<v2.size();i++){
            int c=count(v1.begin(),v1.end(),v2[i]);
            p.push_back(make_pair(v2[i],c));
        }
        vector<int>v;
        for(int i=0;i<p.size();i++){
            v.insert(v.end(),p[i].second,p[i].first);
        }
        sort(v1.begin(),v1.end());
        vector<int>V;
        for(int i=0;i<v1.size();i++){
            vector<int>::iterator it;
            it=find(v.begin(),v.end(),v1[i]);
            if(it==v.end()){
                V.push_back(v1[i]);
            }
        }
        for(int i=0;i<V.size();i++){
            v.push_back(V[i]);
        }
        return v;
    }
};