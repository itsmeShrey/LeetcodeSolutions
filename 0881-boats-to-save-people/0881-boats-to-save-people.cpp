class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int>v;
        v=people;
        sort(v.begin(),v.end());
        int a=0,b=v.size()-1;int count=0;
        while(a<=b){
            if((v[a]+v[b])<=limit){
                count++;
                a++;
                b--;
            }
            else{
                count++;
                b--;
            }
        }
        return count;
    }
};