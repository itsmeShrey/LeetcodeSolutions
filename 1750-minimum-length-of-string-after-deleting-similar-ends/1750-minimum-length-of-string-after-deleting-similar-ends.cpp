class Solution {
public:
    int minimumLength(string s) {
        int count=s.length();
        int i=0,j=s.length()-1;
        while(i<j && s[i]==s[j]){
            char ch=s[i];
            while(i<=j && s[i]==ch){
                i++;
            }
            while(i<=j && s[j]==ch){
                j--;
            }
        }
        if(i>j){
            return 0;
        }
        else{
            return j-i+1;
        }
    }
};