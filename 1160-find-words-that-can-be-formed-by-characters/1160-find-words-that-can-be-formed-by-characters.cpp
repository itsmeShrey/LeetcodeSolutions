class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>m;int count=0;
        for(auto l:chars){
            m[l]++;
        }
        for(int i=0;i<words.size();i++){
            int flag=0;
            string s=words[i];
            map<char,int>m1;
            for(auto l:s){
                m1[l]++;
            }
            for(int i=0;i<s.length();i++){
                if(m[s[i]]>=m1[s[i]]){
                    continue;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count+=s.length();
            }
        }
        return count;
    }
};