class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>v;
        v=words;vector<string>v1;int flag=0;
        for(int i=0;i<v.size();i++){
            map<char,char>m1,m2;
            string s=v[i];
            if(pattern.length()==s.length()){
                for(int j=0;j<s.length();j++){
                    auto it=m1.find(pattern[j]);
                    if(it==m1.end()){
                        m1[pattern[j]]=s[j];
                    }
                    else{
                        if(it->second!=s[j]){
                            flag=1;
                            break;
                        }
                    }

                    auto it1=m2.find(s[j]);
                    if(it1==m2.end()){
                        m2[s[j]]=pattern[j];
                    }
                    else{
                        if(it1->second!=pattern[j]){
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==0){
                v1.push_back(s);
            }
            flag=0;
        }
        return v1;
    }
};