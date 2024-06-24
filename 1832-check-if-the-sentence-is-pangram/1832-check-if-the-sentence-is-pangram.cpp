class Solution {
public:
    bool checkIfPangram(string sentence) {
       map<char,int>m;
       for(char ch='a';ch<='z';ch++){
        m[ch]++;
       }
       for(auto l:sentence) {
        m[l]++;
       }
       for(auto l:m){
        if(l.second==1){
            return false;
        }
       }
       return true;
    }
};