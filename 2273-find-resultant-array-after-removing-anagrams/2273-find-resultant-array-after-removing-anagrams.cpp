class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>v;
        v=words;
        for(int i=1;i<v.size();i++){
            string s=v[i];
            string s2=v[i];
            sort(s.begin(),s.end());
            string s1=v[i-1];
            sort(s1.begin(),s1.end());
            vector<string>v1;int count=0;
            if(s1==s){
                for(int j=0;j<v.size();j++){
                    if(v[j]==s2 && count==0){
                        count++;
                        continue;
                    }
                    v1.push_back(v[j]);
                }
                v=v1;
                i=0;
            }
            else{
                continue;
            }
        }
        return v;
    }
};