class Solution {
public:
    string sortVowels(string s) {
        vector<pair<int,char>>p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='e'||s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                int c=(int)s[i];
                p.push_back(make_pair(c,s[i]));
            }
        }

        sort(p.begin(),p.end());
        string s1;int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='e'||s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s1+=p[j].second;
                j++;
            }
            else{
                s1+=s[i];
            }
        }
        return s1;
    }
};