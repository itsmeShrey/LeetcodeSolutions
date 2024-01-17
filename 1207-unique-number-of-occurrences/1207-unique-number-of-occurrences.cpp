class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       vector<int>v;
        v=arr;
        set<int>s;
        for(int i=0;i<v.size();i++){
            int c=v[i];
            int d=count(v.begin(),v.end(),c);
            s.insert(d);
        }
        set<int>s1;
        for(int i=0;i<v.size();i++){
            s1.insert(v[i]);
        }
        if(s.size()==s1.size()){
            return true;
        }
        else{
            return false;
        }
    }
};