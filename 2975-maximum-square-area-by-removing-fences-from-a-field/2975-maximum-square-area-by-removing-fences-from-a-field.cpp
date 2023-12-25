class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        hFences.push_back(1);hFences.push_back(m);vFences.push_back(1);vFences.push_back(n);
        sort(hFences.begin(),hFences.end());
        sort(vFences.begin(),vFences.end());
        set<long long int>s;
        for(int i=0;i<hFences.size();i++){
            for(int j=i+1;j<hFences.size();j++){
                s.insert(hFences[j]-hFences[i]);
            }
        }
        long long int d=-1;long long int e=-1;
        for(int i=0;i<vFences.size();i++){
            for(int j=i+1;j<vFences.size();j++){
                long long int c=vFences[j]-vFences[i];
                if(s.find(c)!=s.end()){
                    d=c*c;
                    e=max(e,d);
                }
            }
        }
        return e%1000000007;
    }
};