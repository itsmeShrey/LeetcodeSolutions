class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s1="";int count=0;
        for(auto l:words){
            string s=l;
            reverse(s.begin(),s.end());
            if(s==l && count==0){
                s1=l;
                count=1;
                break;
            }
        }
        return s1;
    }
};