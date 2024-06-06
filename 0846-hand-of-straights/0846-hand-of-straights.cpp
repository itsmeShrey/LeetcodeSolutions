class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>m;
        if(hand.size()%groupSize!=0){
            return false;
        }
        for(auto l:hand){
            m[l]++;
        }
        while(!m.empty()){
            int c=m.begin()->first;
            for(int i=1;i<groupSize;i++){
                int d=c+i;
                if(m.find(d)!=m.end()){
                    m[d]--;
                    if(m[d]==0){
                        m.erase(d);
                    }
                }
                else{
                    return false;
                }
            }
            m[c]--;
            if(m[c]==0){
                m.erase(c);
            }
        }
        return true;
    }
};