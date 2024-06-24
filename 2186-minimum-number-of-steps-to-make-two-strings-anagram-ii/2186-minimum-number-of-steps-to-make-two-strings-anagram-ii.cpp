class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m,m1;
        for(char ch='a';ch<='z';ch++){
            m[ch]=0;
            m1[ch]=0;
        }
        for(auto l:s){
            m[l]++;
        }
        for(auto l:t){
            m1[l]++;
        }
        // for(auto l:m){
        //     cout<<l.second<<" ";
        // }
        // cout<<endl;
        // for(auto l:m1){
        //     cout<<l.second<<" ";
        // }
        int count=0;
        for(char ch='a';ch<='z';ch++){
            count+=abs(m[ch]-m1[ch]);
        }
        return count;
    }
};