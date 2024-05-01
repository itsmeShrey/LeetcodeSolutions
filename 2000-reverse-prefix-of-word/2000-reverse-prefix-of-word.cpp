class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s1;
        int index;int flag=0;
        for(int i=0;i<word.length();i++){
            s1+=word[i];
            if(word[i]==ch){
                index=i;
                flag=1;
                break;
            }
        }
        if(flag==1){
            reverse(s1.begin(),s1.end());
        }
        for(int i=index+1;i<word.length();i++){
            s1+=word[i];
        }
        return s1;
    }
};