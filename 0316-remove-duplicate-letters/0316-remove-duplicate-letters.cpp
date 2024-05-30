class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>v1(26,0);
        for(int i=0;i<s.length();i++){
            v1[s[i]-'a']=i;
        }
        vector<int>vis(26,false);
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(vis[s[i]-'a']==true){
                continue;
            }
            while(st.size()>0 && st.top()>s[i] && i<v1[st.top()-'a']){
                vis[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            vis[s[i]-'a']=true;
        }
        string s1;
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};