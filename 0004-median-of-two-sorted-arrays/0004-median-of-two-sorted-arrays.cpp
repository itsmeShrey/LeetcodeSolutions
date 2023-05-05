class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>v;double c;
       for(int i=0;i<nums1.size();i++){
           v.push_back(nums1[i]);
       }
       for(int i=0;i<nums2.size();i++){
           v.push_back(nums2[i]);
       }
       sort(v.begin(),v.end());
       if(v.size()%2!=0){
           c=v[v.size()/2];
       }
       else{
           double d=v[v.size()/2];
           double e=v[v.size()/2-1];
           c=(d+e)/2.0;
       }
       return c;
    }
};