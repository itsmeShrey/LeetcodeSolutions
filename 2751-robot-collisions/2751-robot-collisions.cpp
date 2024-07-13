class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<int>v(positions.size());
        for(int i=0;i<positions.size();i++){
            v[i]=i;
        }
        vector<pair<int,int>>p;
        for(int i=0;i<positions.size();i++){
            p.push_back({positions[i],v[i]});
        }
        sort(p.begin(),p.end());
        stack<int>s;
        v.clear();
        for(int i=0;i<p.size();i++){
            v.push_back(p[i].second);
        }
        for(auto it:v){
            if(directions[it]=='R'){
                s.push(it);
            }
            else{
                while(!s.empty() && healths[it]>0){
                    int c=s.top();
                    s.pop();
                    if(healths[c]<healths[it]){
                        healths[it]-=1;
                        healths[c]=0;
                    }
                    if(healths[c]>healths[it]){
                        healths[it]=0;
                        healths[c]-=1;
                        s.push(c);
                    }
                    if(healths[it]==healths[c]){
                        healths[it]=0;
                        healths[c]=0;
                    }
                }
            }
        }
        vector<int>v1;
        for(auto l:healths){
            if(l>0){
                v1.push_back(l);
            }
        }
        return v1;
    }
};