class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;int i=1;
        for(auto l:words){
            string s=l;
            reverse(s.begin(),s.end());
            auto it=find(words.begin()+i,words.end(),s);
            if(it!=words.end()){
                count++;
            }
            i++;
        }
        return count;
    }
};