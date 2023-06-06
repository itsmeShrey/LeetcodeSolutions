class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int>v;
        v=arr;int flag=0;
        sort(v.begin(),v.end());
        int c=abs(v[0]-v[1]);
        for(int i=2;i<v.size();i++){
            if((v[i]-v[i-1])==c){
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            return true;
        }
        else{
            return false;
        }
    }
};