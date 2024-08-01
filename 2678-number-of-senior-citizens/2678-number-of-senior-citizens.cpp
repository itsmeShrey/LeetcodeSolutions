class Solution {
public:
    int countSeniors(vector<string>& details) {
        vector<string>v;
        v=details;
        string s;int count=0;
        for(int i=0;i<v.size();i++){
            int c=v[i][11]-48;int d=v[i][12]-48;
            int e=c*10+d;
            if(e>60){
                count++;
            }
        }
        return count;
    }
};