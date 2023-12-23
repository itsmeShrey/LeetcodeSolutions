class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int sum1=0,sum2=0;
        for(int i=0;i<k;i++){
            sum1+=v[i];
        }
        sum2=sum1;int j=0;
        for(int i=k-1;i>=0;i--){
            sum2-=v[i];
            sum2+=v[v.size()-1-j];
            sum1=max(sum1,sum2);
            j++;
        }
        return sum1;
    }
};