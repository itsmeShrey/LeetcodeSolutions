class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        vector<int>v;
        v=plants;
        int count=0;int c=capacity;
        for(int i=0;i<v.size();i++){
            if(c-v[i]>=0){
                c-=v[i];
                count++;
            }
            else{
                c=capacity;
                count+=i*2+1;
                c-=v[i];
            }
        }
        return count;
    }
};