class Solution {
public:
    string freqAlphabets(string s) {
        map<char,string>m;int i=1;
        for(char ch='a';ch<='z';ch++){
            if(ch<='i'){
                m[ch]=to_string(i);
                i++;
            }
            else{
                string s1=to_string(i)+'#';
                m[ch]=s1;
                i++;
            }
        }
        map<string,string>m1;
        for(auto l:m){
            m1[l.second]=l.first;
        }
        // for(auto l:m1){
        //     cout<<l.first<<" "<<l.second<<endl;
        // }
        string s2;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='#'){
                string s1=to_string(s[i-2]-48)+to_string(s[i-1]-48)+s[i];
                cout<<s1<<endl;
                s2+=m1[s1];
                i-=2;
            }
            else{
                s2+=m1[to_string(s[i]-48)];
            }
        }
        reverse(s2.begin(),s2.end());
        return s2;
    }
};