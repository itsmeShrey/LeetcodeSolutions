class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        vector<int>v1,v2;
        v1=horizontalCuts;v2=verticalCuts;
        v1.push_back(h);v2.push_back(w);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int c=v1[0];int d=v2[0];
        for(int i=1;i<v1.size();i++){
            int e=v1[i]-v1[i-1];
            c=max(e,c);
        }
        for(int i=1;i<v2.size();i++){
            int e=v2[i]-v2[i-1];
            d=max(d,e);
        }
        return (1LL*c*d) % 1000000007;
    }
};