class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int>m;
        int count=0;vector<int>v;
        for(int i=0;i<A.size();i++){
            m[A[i]]++;
            m[B[i]]++;
            for(auto l:m){
                if(l.second>=2){
                    count+=1;
                }
            }
            v.push_back(count);
            count=0;
        }
        for(auto l:v){
            cout<<l<<" ";
        }
        return v;
    }
};