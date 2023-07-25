class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int d=0;
        int c=*max_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
         if(arr[i]==c){
             d=i;
             break;
         }
        }
        return d;
    }
};