class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s1=to_string(num1);
        string s2=to_string(num2);
        string s3=to_string(num3);
        int c=s1.length(),d=s2.length(),e=s3.length();
        string s;
        int f=min(c,min(d,e));
        cout<<f<<endl;
        for(int i=f-1;i>=0;i--){
            s+=to_string(min(s1[s1.length()-i-1]-'0',min(s2[s2.length()-i-1]-'0',s3[s3.length()-i-1]-'0')));
        }
        cout<<s<<endl;
        int b=stoi(s);
        cout<<b<<endl;
        return b;
    }
};