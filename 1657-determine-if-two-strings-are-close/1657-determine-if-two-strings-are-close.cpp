class Solution {
public:
    bool closeStrings(string word1, string word2) {
        set<char>s,s1;int flag=0;
        for(auto l:word1){
            s.insert(l);
        }
        for(auto l:word2){
            s1.insert(l);
        }
        vector<int>v1(26,0),v2(26,0);
        for(int i=0;i<word1.length();i++){
            v1[word1[i]-97]++;
        }
        for(int i=0;i<word2.length();i++){
            v2[word2[i]-97]++;
        }
        sort(v1.begin(),v1.end()),sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                flag=1;
                break;
            }
        }
        if(flag==1 || s1!=s){
            return false;
        }
        else{
            return true;
        }
    }
};