class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>v(26,words.size());
        for(int i=0;i<words.size();i++){
            vector<int>v1(26,0);
            for(auto l:words[i]){
                v1[l-'a']++;
            }
            for(char ch='a';ch<='z';ch++){
                v[ch-'a']=min(v[ch-'a'],v1[ch-'a']);
            }
        }
        vector<string>v1;
        for(char ch='a';ch<='z';ch++){
            while(v[ch-'a']--){
                v1.push_back(string(1,ch));
            }
        }
        return v1;
    }
};