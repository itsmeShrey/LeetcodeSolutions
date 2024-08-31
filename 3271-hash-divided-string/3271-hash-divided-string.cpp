class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.length();
        vector<char>result;
        map<char,int>m;int j=0;map<int,char>m1;
        for(char ch='a';ch<='z';ch++){
            m[ch]=j;
            m1[j]=ch;
            j++;
        }
        for(int i=0;i<n;i+=k){
            int sum=0;
            for(int j=i;j<i+k;j++){
                sum+=m[s[j]];
                cout<<s[j];
            }
            cout<<endl;
            result.push_back(m1[sum%26]);
        }
        string s1;
        for(auto l:result){
            s1+=l;
        }
        return s1;
    }
};