class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<string>v;
        v=words;int flag=0,count=0;
        for(int i=0;i<v.size();i++){
            string s=v[i];
            for(int j=0;j<s.length();j++){
                char s1=s[j];
                size_t found = allowed.find(s1);
                if (found != string::npos){
                    continue;
                }
                else{
                    j=s.length()-1;
                    flag=1;
                }
            }
            if(flag==0){
                count++;
            }
            flag=0;
        }
        return count;
    }
};