class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(auto l:s){
            if(l>=97 && l<=122 || (l>=48 && l<=57)){
                s1+=l;
            }
        }
        int i=0,j=s1.length()-1;
        while(i<j){
            if(s1[i]==s1[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};