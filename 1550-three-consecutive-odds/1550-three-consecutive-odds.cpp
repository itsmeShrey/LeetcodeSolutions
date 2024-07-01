class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        vector<int>v;
        v=arr;
        int count=0;int flag=0;
        for(int i=0;i<v.size();i++){
            if(count<3){
                if(v[i]%2!=0){
                    count++;
                }
                else{
                    count=0;
                }
            }
            else{
                flag=1;
                break;
            }
        }
        if(count>=3){
            flag=1;
        }
        if(flag==1){
            return true;
        }
        else
            return false;
    }
};