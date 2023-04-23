class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        v=nums;
        vector<int>v1;//index position
        for(int i=0;i<v.size();i++){
            int c=target-v[i];
            vector<int>::iterator it;
            it=find(v.begin()+i+1,v.end(),c);
            if(it!=v.end()){
                v1.push_back(i);
                v1.push_back(it-v.begin());
                break;
            }
        }
        return v1;
    }
};
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>v;
//           v=nums;
//       vector<int>v1;
//       for(int i=0;i<v.size();i++){
//         int c=target-v[i];
//           // vector<int>::iterator a;
//          auto a=find(v.begin()+i+1,v.end(),c);
//           if(a!=v.end()){
//            v1.push_back(i);
//           v1.push_back(a-v.begin());
//           break;   
//           }
//       }
//       return v1;
//     }
// };