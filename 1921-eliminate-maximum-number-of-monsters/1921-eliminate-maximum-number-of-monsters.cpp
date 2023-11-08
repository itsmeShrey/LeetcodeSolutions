class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double>v;
        for(int i=0;i<dist.size();i++){
            double c=(double)dist[i]/(double)speed[i];
            v.push_back(c);
        }
        int count=0;
        for(auto l:v){
            cout<<l<<" ";
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]>i){
                count++;
            }
            else if(v[i]<=i){
                break;
            }
        }
        return count;
    }
};