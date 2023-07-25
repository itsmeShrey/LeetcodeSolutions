class Solution {
public:
    bool areNumbersAscending(string s) {
        int j=INT_MIN;int flag=0;int c=0;
        vector<int>v,v1;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])==true && isdigit(s[i+1])==false){
                c=s[i]-48;
                v.push_back(c);
            }
            else if(isdigit(s[i]) && isdigit(s[i+1])){
                int f=s[i]-48,d=s[i+1]-48;
                int e=f*10+d;
                v.push_back(e);
                i++;
            }
        }
        set<int>s1;
        for(auto l:v){
            s1.insert(l);
        }
        for(auto &str:s1){
            v1.push_back(str);
        }
        sort(v1.begin(),v1.end());
        if(v1==v){
            return true;
        }
        else{
            return false;
        }
    }
};