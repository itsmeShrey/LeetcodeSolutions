class Solution {
public:
    string makeGood(string s) {
        stack <char>s1;
        for(auto l:s){
            if(s1.empty()){
                s1.push(l);
            }
            else if(abs(s1.top()-l)==32){
                s1.pop();
            }
            else{
                s1.push(l);
            }
        }
        string s2;
        while(!s1.empty()){
            s2=s1.top()+s2;
            s1.pop();
        }
        return s2;
    }
};