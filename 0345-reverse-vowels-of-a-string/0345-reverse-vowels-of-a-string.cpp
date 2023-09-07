class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='e'||s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v.push_back(s[i]);
            }
        }
        reverse(v.begin(),v.end());
        string s1;int j=0;
        for(auto l:s){
            if(l=='e'||l=='a'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U'){
                s1+=v[j];
                j++;
            }
            else{
                s1+=l;
            }
        }
        return s1;
    }
};