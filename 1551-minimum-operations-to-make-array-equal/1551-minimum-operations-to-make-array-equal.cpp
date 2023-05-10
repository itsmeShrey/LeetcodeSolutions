class Solution {
public:
    int minOperations(int n) {
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back((2*i)+1);
        }
        int d=n;int sum=0;
        if(n%2==0){
            int i=0;
            while(i!=n/2){
                sum+=(abs(d-v[i]));
                i++;
            }
        }
        else if(n%2!=0){
            int i=0;
            while(v[i]!=d){
                sum+=abs(d-v[i]);
                i++;
            }
        }
        return sum;
    }
};