class Solution {
public:
    int minMoves2(vector<int>& v) {
        sort(v.begin(),v.end());int c=0;
        if(v.size()%2==0){
            c=(v[v.size()/2]+v[v.size()/2-1])/2;
        }
        else{
            c=v[v.size()/2];
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=abs(c-v[i]);
        }
        return sum;
    }
};