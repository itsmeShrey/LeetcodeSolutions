class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        vector<int>v1;vector<int>v2;
        int sum=0;
        v1=seats;v2=students;
        sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            sum+=(abs(v1[i]-v2[i]));
        }
        return sum;
    }
};