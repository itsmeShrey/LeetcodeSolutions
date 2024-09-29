class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        map<string,int>m;
        for(auto l:bannedWords){
            m[l]++;
        }
        int count=0;
        for(auto l:message){
            if(m[l]==0){
                continue;
            }
            else{
                count++;
            }
        }
        return count>=2?true:false;
    }
};