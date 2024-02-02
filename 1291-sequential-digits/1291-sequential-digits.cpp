class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>v;
        for(int i=0;i<s.length();i++){
            string s1;
            for(int j=i;j<s.length();j++){
                s1+=s[j];
                if(stoi(s1)>=low && stoi(s1)<=high){
                    v.push_back(stoi(s1));
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};