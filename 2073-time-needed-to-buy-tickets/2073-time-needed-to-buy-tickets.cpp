class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        vector<int>v;vector<int>v1;
        v=tickets;
        queue<int>c;
        for(int i=0;i<v.size();i++){
            c.push(i);//0 1 2
        }
        int count=0;
        while(!c.empty()){
            count++;//1
            int temp=c.front();//0
            c.pop();
            if(v[temp]>=1){
                v[temp]-=1;//1
            }
            if(temp!=k && v[temp]==0){
                continue;
            }
            if(temp==k && v[temp]==0){
                break;
            }
            c.push(temp);//1 2 0
        }
        return count;
    }
};