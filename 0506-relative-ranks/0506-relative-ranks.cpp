class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int>v;
       v=score;
       vector<pair<int,int>>p;
       vector<int>v1;
       v1=v;
       sort(v1.begin(),v1.end(),greater<int>());
       for(int i=0;i<v.size();i++){
           int c=v[i];
           vector<int>::iterator it;
           it=find(v1.begin(),v1.end(),c);
           p.push_back(make_pair(v[i],abs(v1.begin()-it)));
       }
       vector<string>s;
       for(int i=0;i<p.size();i++){
           if(p[i].second+1==1){
               s.push_back("Gold Medal");
           }
           else if(p[i].second+1==2){
               s.push_back("Silver Medal");
           }
           else if(p[i].second+1==3){
               s.push_back("Bronze Medal");
           }
           else{
               s.push_back(to_string(p[i].second+1));
           }
       }
       return s;
    }
};