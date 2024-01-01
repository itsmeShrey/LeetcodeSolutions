class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int c=0,d=0;
        while(c<g.size() && d<s.size()){
            if(g[c]<=s[d]){
                c++;
            }
            d++;
        }
        return c;
    }
};