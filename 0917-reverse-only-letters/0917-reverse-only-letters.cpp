class Solution {
public:
    string reverseOnlyLetters(string s) {
        string s1;
        for(auto l:s){
            if(isalpha(l)){
                s1+=l;
            }
        }
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                continue;
            }
            else{
                s1.insert(i,1,s[i]);
            }
        }
        return s1;
    }
};