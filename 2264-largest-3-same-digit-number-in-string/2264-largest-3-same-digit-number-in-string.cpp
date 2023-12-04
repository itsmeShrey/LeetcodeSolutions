class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>v;
        for(int i=1;i<num.length()-1;i++){
            if(num[i]==num[i-1] && num[i]==num[i+1]){
                string s=to_string(num[i-1]-48)+to_string(num[i]-48)+to_string(num[i+1]-48);
                v.push_back(s);
            }
        }
        sort(v.begin(),v.end());
        for(auto l:v){
            cout<<l<<" ";
        }
        string s;
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1){
                s=v[i];
            }
        }
        return s;
    }
};