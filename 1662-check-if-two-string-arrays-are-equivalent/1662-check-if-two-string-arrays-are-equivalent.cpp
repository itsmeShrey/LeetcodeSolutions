class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        vector<string>v;
        vector<string>v1;
        v=word1;
        v1=word2;
        string s;
        string s1;
        for(int i=0;i<v.size();i++){
            s+=v[i];
        }
        for(int i=0;i<v1.size();i++){
            s1+=v1[i];
        }
        if(s==s1){
            return true;
        }
        else{
            return false;
        }
    }
};