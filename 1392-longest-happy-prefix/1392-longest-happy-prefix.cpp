class Solution {
public:
    string longestPrefix(string s) {
        // string s1,s2;int i=0,j=s.length()-1;int c=INT_MIN;
        // while(i<s.length()-1){
        //     s1+=s[i];
        //     s2+=s[j];
        //     string s3=s2;
        //     reverse(s3.begin(),s3.end());
        //     cout<<s1<<" "<<s3<<endl;
        //     if(s1==s3){
        //         c=s1.length();
        //     }
        //     i++;
        //     j--;
        // }
        // if(c==INT_MIN){
        //     return "";
        // }
        // else{
        //     return s.substr(0,c);
        // }
        vector<int>v(s.length());
        int j=0;int i=1;
        while(i<s.length()){
            if(s[i]==s[j]){
                j++;
                v[i]=j;
                i++;
            }
            else{
                if(j!=0){
                    j=v[j-1];
                }
                else{
                    v[i]=0;
                    i++;
                }
            }
        }
        int c=v[v.size()-1];
        int k=0;string s1="";
        cout<<c<<endl;
        while(c>0){
            s1+=s[k];
            k++;
            c--;
        }
        return s1;
    }
};