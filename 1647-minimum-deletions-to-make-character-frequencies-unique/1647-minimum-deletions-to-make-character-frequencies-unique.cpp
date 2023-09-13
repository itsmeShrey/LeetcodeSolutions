class Solution {
public:
    int minDeletions(string s) {
      unordered_map<char,int>m;
      for(auto l:s){
        m[l]+=1;
      }
      unordered_set<int>s1;int count=0;
      for(auto l:m){
        int c=l.second;
        while(c>0 && s1.find(c)!=s1.end()){
          c--;
          count++;
        }
        s1.insert(c);
      }
      return count;
      
    }
};