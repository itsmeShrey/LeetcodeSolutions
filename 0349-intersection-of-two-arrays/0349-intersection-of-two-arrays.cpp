class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int>v1;vector<int>v2;
        v1=nums1;v2=nums2;
        int c=v1.size();int d=v2.size();
        vector<int>v;
        if(c<=d){
            for(int i=0;i<v1.size();i++){
                int e=v1[i];
                vector<int>::iterator it;
                it=find(v2.begin(),v2.end(),e);
                if(it!=v2.end()){
                    v.push_back(e);
                }
            }
        }
        else if(d<c){
            for(int i=0;i<v2.size();i++){
                int e=v2[i];
                vector<int>::iterator it;
                it=find(v1.begin(),v1.end(),e);
                if(it!=v1.end()){
                    v.push_back(e);
                }
            }
        }
        set<int>s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        vector<int>V;
        for(auto &str:s){
            V.push_back(str);
        }
        return V;
    }
};