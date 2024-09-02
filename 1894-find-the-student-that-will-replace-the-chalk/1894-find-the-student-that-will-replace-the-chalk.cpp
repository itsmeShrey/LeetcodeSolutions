class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=0;
        for(auto l:chalk){
            sum+=l;
        }
        k=k%sum;
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]<=k){
                k-=chalk[i];
            }
            else{
                return i;
            }
        }
        return 0;
    }
};