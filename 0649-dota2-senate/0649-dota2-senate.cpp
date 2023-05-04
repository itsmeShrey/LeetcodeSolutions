class Solution {
public:
    string predictPartyVictory(string senate) {
        int count=0;
        for(int i=0;i<senate.length();i++){
            if(senate[i]=='R'){
                if(count<0){
                    senate.push_back('D');
                }
                count++;
            }
            else if(senate[i]=='D'){
                if(count>0){
                    senate.push_back('R');
                }
                count--;
            }
        }
        if(count>0){
            return  "Radiant";
        }
        else{
            return "Dire";
        }
    }
};