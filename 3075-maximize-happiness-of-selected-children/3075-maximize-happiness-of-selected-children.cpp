class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        stack<int>s;
        long long int count=0;long long int sum=0;
        for(int i=0;i<happiness.size();i++){
            s.push(happiness[i]);
        }
        while(k>0){
            if(s.top()-count<0){
                s.top()=count;
            }
            cout<<s.top()-count<<" ";
            sum+=s.top()-count;
            s.pop();
            count++;
            k--;
        }
        return sum;
    }
};