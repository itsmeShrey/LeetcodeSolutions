class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>v;
        v=code;
        vector<int>v3;
        if(k==0){
            vector<int>v2;
            v2.insert(v2.end(),v.size(),0);
            v3=v2;
        }
        else if(k>=1){
            vector<int>v1;
            v1=v;
            for(int i=0;i<v.size();i++){
                v1.push_back(v[i]);
            }
            vector<int>v2;
            for(int i=0;i<v.size();i++){
                int sum=0;
                for(int j=i;j<k+i;j++){
                    sum+=v1[j+1];
                }
                v2.push_back(sum);
            }
            v3=v2;
        }
        else if(k<0){
            vector<int>v1;
            for(int i=v.size()-1;i>=0;i--){
                v1.push_back(v[i]);
            }
            for(int i=v.size()-1;i>=0;i--){
                v1.push_back(v[i]);
            }
            vector<int>v2;
             for(int i=0;i<v.size();i++){
                int sum=0;
                for(int j=i;j<abs(k)+i;j++){
                    sum+=v1[j+1];
                }
                v2.push_back(sum);
            }
            for(int i=v2.size()-1;i>=0;i--){
                v3.push_back(v2[i]);
            }

        }
        return v3;
    }
};