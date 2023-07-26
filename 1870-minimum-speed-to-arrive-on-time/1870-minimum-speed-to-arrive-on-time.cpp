class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        vector<int>v;
        v=dist;
        int c=v.size();int speed=0;
        int low=0,high=1e7+1;
        while(low<high){
            int mid=low+(high-low)/2;
            double hours=0;

            for(int i=0;i<c-1;i++){
                hours+=ceil(double(v[i])/double(mid));
            }
            hours+=(double(v[c-1])/double(mid));

            if(hours>hour){
                low=mid+1;
            }
            else{
                speed=mid;
                high=mid;
            }
        }
        if(speed==0){
            return -1;
        }
        else{
            return speed;
        }
    }
};