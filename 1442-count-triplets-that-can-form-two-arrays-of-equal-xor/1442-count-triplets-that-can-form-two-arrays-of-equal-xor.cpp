class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int>v1;
        v1.push_back(0);
        for(int i=0;i<arr.size();i++){
            v1.push_back(v1[v1.size()-1]^arr[i]);
        }
        int count=0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j;k<arr.size();k++){
                    int a=v1[j]^v1[i];
                    int b=v1[k+1]^v1[j];
                    if(a==b){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};