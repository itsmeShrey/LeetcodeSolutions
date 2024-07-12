class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>s1;
        string s2,s4;long long int sum=0;int a;int b;
        if(x>y){
            s2="ab";
            s4="ba";
            a=x;
            b=y;
        }
        if(y>x){
            s2="ba";
            s4="ab";
            a=y;
            b=x;
        }
        int score=0;
        s1.push(s[0]);int i=1;
        while (i < s.length()) {
            if (!s1.empty() && s1.top() == s2[0] && s[i] == s2[1]) {
                s1.pop();
                sum += a;
            } else {
                s1.push(s[i]);
            }
            i++;
        }
        s="";
        while(!s1.empty()){
            s+=s1.top();
            s1.pop();
        }
        reverse(s.begin(),s.end());
        i=1;
        s1.push(s[0]);
        while (i < s.length()) {
            if (!s1.empty() && s1.top() == s4[0] && s[i] == s4[1]) {
                s1.pop();
                sum += b;
            } else {
                s1.push(s[i]);
            }
            i++;
        }
        return sum;
    }
};