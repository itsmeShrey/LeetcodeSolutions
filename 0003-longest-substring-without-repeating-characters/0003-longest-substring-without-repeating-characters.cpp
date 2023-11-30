class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int c=0;
        for(int i=0;i<s.length();i++){
            vector<bool>v(256,false);
            for(int j=i;j<s.length();j++){
                if(v[s[j]]==true){
                    break;
                }
                else{
                    c=max(c,j-i+1);
                    v[s[j]]=true;
                }
            }
            v[s[i]]=false;
        }
        return c;
    }
};