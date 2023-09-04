class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<char>v1,v2,v3,v4;
        v1.push_back(s1[0]),v1.push_back(s1[2]);
        v2.push_back(s1[1]),v2.push_back(s1[3]);
        v3.push_back(s2[0]),v3.push_back(s2[2]);
        v4.push_back(s2[1]),v4.push_back(s2[3]);
        
        sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());sort(v3.begin(),v3.end());sort(v4.begin(),v4.end());
        if(v1==v3 && v2==v4){
            return true;
        }
        else{
            return false;
        }
    }
};