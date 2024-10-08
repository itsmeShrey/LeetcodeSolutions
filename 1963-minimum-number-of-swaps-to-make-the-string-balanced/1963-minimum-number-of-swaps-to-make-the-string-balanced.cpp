class Solution {
public:
    int minSwaps(string s) {
        stack<char> s1;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '['){
                s1.push(ch);   
            }
            else {
                if (!s1.empty()){
                    s1.pop();
                }
                else{
                    count++;
                }
            }
        }
        return (count + 1)/2;
    }
};