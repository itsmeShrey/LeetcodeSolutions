class Solution {
public:
    bool asteroidsDestroyed(long long int mass, vector<int>& asteroids) {
        vector<int>v;
        v=asteroids;
        sort(v.begin(),v.end());
        for(auto l:v){
            if(mass<l){
                return false;
            }
            mass+=l;
        }
        return true;
    }
};