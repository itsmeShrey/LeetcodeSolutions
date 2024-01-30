class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i].size()>1 || isdigit(tokens[i][0])){
                s.push(stoi(tokens[i]));
            }
            else{
                int c=s.top();
                s.pop();
                int d=s.top();
                s.pop();
                if(tokens[i]=="+"){
                    s.push(c+d);
                }
                if(tokens[i]=="-"){
                    s.push(d-c);
                }
                if(tokens[i]=="*"){
                    s.push(c*d);
                }
                if(tokens[i]=="/"){
                    s.push(d/c);
                }
            }
        }
        return s.top();
    }
};