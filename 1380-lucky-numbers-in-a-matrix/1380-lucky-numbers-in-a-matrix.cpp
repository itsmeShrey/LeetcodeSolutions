//My solution but in this in one case runtime error occured amd m not able to find out.
// class Solution {
// public:
//     vector<int> luckyNumbers (vector<vector<int>>& matrix) {
//         vector<vector<int>>v;
//         v=matrix;
//         vector<int>v1;
//         for(int i=0;i<v.size();i++){
//             int c=*min_element(v[i].begin(),v[i].end());
//             v1.push_back(c);
//         }
//         vector<vector<int>>v2;
//         v2=v;
//         int count=0;
//         for(int i=0;i<v2.size();i++){
//             for(int j=0;j<v2[i].size();j++){
//                 v2[i][j]=v[j][i];
//             }
//         }
//         for(int i=0;i<v2.size();i++){
//             int c=*max_element(v2[i].begin(),v2[i].end());
//             v1.push_back(c);
//         }
//         vector<int>V;
//         sort(v1.begin(),v1.end());
//         for(int i=1;i<v1.size();i++){
//             if(v1[i]==v1[i-1]){
//                 V.push_back(v1[i]);
//             }
//         }
//         return V;
//     }
// };
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        v=matrix;
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            int c=-1;
            int min=INT_MAX;
            int max=INT_MIN;
            min=*min_element(v[i].begin(),v[i].end());
            vector<int>::iterator it;
            it=find(v[i].begin(),v[i].end(),min);
            c=it-v[i].begin();
            for(int j=0;j<v.size();j++){
                if(v[j][c]>max){
                    max=v[j][c];
                }
            }
            if(max==min){
                v1.push_back(max);
            }
        }
        return v1;
    }
};