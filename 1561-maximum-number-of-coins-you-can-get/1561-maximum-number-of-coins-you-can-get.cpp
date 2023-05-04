class Solution {
public:
    int maxCoins(vector<int>& piles) {
        vector<int>v;
        v=piles;
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<v.size()/3;i++){
            int c=v[i];int d=v[v.size()-1-(i*2)];int e=v[v.size()-1-(i*2)-1];
            sum+=e;
        }
        return sum;
    }
};