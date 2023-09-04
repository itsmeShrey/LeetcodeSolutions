class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<char>v1,v2,v3,v4;
        for(int i=0;i<s1.length();i++){
            if(i%2==0){
                v1.push_back(s1[i]);
            }
            else{
                v2.push_back(s1[i]);
            }
        }
        for(int i=0;i<s2.length();i++){
            if(i%2==0){
                v3.push_back(s2[i]);
            }
            else{
                v4.push_back(s2[i]);
            }
        }
        sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());sort(v3.begin(),v3.end());sort(v4.begin(),v4.end());
        if(v1==v3 && v2==v4){
            return true;
        }
        else{
            return false;
        }
    }
};