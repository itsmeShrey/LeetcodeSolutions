class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int c=word1.length();
        int d=word2.length();
        string s;
        for(int i=0;i<c || i<d;i++){
            if(i<c){
                s+=word1[i];
            }
            if(i<d){
                s+=word2[i];
            }
        }
        return s;
    }
};