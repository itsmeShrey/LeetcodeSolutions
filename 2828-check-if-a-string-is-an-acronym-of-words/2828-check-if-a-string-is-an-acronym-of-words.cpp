class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string s1;
        for(int i=0;i<words.size();i++){
            s1+=words[i][0];
        }
        if(s1==s){
            return true;
        }
        else{
            return false;
        }
    }
};