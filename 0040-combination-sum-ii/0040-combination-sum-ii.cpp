class Solution {
public:
    map<vector<int>,int>m;
    void f(int i,vector<int>&arr,int target,vector<vector<int>>&v,vector<int>&v1){
        if(target==0){
            v.push_back(v1);
            return;
        }
        for(int index=i;index<arr.size();index++){
            if(index>i && arr[index]==arr[index-1]){
                continue;
            }
            if(arr[index]>target){
                break;
            }
            v1.push_back(arr[index]);
            f(index+1,arr,target-arr[index],v,v1);
            v1.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>>v;
        sort(arr.begin(),arr.end());
        vector<int>v1;
        f(0,arr,target,v,v1);
        return v;
    }
};