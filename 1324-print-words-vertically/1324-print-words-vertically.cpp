class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>v;string s1;
        string s2=s+".";int c=INT_MIN;
        for(int i=0;i<s2.length();i++){
            if(s2[i]==32 || s2[i]=='.'){
                c=max(c,(int)s1.length());
                v.push_back(s1);
                s1="";
            }
            else{
                s1+=s2[i];
            }
        }
        vector<string>v1;
        for(int i=0;i<c;i++){
            string S;
            for(int j=0;j<v.size();j++){
                if(isalpha(v[j][i])){
                    S+=v[j][i];
                }
                else{
                    S+=" ";
                }
            }
            auto start = 0;
            auto end = S.find_last_not_of(" ");
            v1.push_back(S.substr(start, end - start + 1));
        }
        return v1;
    }
};