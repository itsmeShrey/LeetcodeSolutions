class Solution {
public:
    int arraySign(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int count1=0;int count2=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                count1++;
                break;
            }
            else if(v[i]<0){
                count2++;
            }
        }
        if(count1!=0){
            return 0;
        }
        else if(count2%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }
};