class Solution {
public:
    int numSplits(string s) {
        map<char,int>left;
        map<char,int>right;
        for(auto l:s){
            right[l]++;
        }
        int count=0;
        for(int i=0;i<s.length();i++){
            left[s[i]]++;
            right[s[i]]--;
            if(right[s[i]]==0){
                right.erase(s[i]);
            }
            if(left.size()==right.size()){
                count++;
            }
        }
        return count;
    }
};