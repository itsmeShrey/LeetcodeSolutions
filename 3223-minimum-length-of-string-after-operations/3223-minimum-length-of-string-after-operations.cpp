class Solution {
public:
    int minimumLength(string s) {
        map<char,int>m;
        for(auto l:s){
            m[l]++;
        }
        int a=s.length();int count=0;
        for(auto l:m){
            while(l.second>2){
                l.second-=2;
                m[l.first]=l.second;
            }
        }
        for(auto l:m){
            cout<<l.first<<" "<<l.second<<endl;
        }
        for(auto l:m){
            count+=l.second;
        }
        return count;
    }
};