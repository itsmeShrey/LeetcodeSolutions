// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         vector<int>v;
//         for(int i=0;i<candies.size();i++){
//             v.push_back(candies[i]);
//         }
//         vector<bool>v1;
//         int c=*max_element(v.begin(),v.end());
//         for(int i=0;i<candies.size();i++){
//             if((v[i]+extraCandies)>=c){
//                 v1.push_back(true);
//             }
//             else{
//                 v1.push_back(false);
//             }
//         }
//         return v1;
//     }
// };
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int k=candies[0];
        for(int i=1;i<candies.size();i++){
            if(candies[i]>k){
                k=candies[i];
            }
            
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=k){
                v.push_back(true);
            }
            else
            v.push_back(false);
        }

        return v;
        
    }
};