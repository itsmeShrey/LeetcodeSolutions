class Solution {
public:
    bool makeEqual(vector<string>& words) {
        string s;int flag=0;
        map<char,int>m;
        for(auto l:words){
            s+=l;
        }
        for(auto l:s){
            m[l]+=1;
        }
        for(auto l:m){
            if(l.second%words.size()==0){
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
        return flag==0?true:false;
    }
};