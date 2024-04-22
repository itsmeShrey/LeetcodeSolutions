class Solution {
public:
    int openLock(vector<string>& v, string target) {
        map<string,int>m,m1;
        m["0000"]=1;
        for(int i=0;i<v.size();i++){
            m1[v[i]]=1;
        }
        queue<pair<string,int>>q;
        q.push({"0000",0});
        if(m1["0000"]==1){
            return -1;
        }
        while(!q.empty()){
            string s1=q.front().first;
            int c=q.front().second;
            q.pop();
            if(s1==target){
                return c;
            }
            for(int i=0;i<s1.size();i++){
                string s2=s1,s3=s1;
                if(s1[i]=='9'){
                    s2[i]='0';
                    s3[i]='8';
                }
                else if(s1[i]=='0'){
                    s2[i]='9';
                    s3[i]='1';
                }
                else{
                    int d=int(s1[i]);
                    d++;
                    s2[i]=char(d);
                    s3[i]=char(d-2);
                }
                if(m[s2]==0 && m1[s2]==0){
                    m[s2]=1;
                    q.push({s2,c+1});
                }
                if(m[s3]==0 && m1[s3]==0){
                    m[s3]=1;
                    q.push({s3,c+1});
                }
                if(s2==target || s3==target){
                    return c+1;
                }
            }
        }
        return -1;
    }
};