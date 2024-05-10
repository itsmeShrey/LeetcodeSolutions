class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<pair<double, pair<int, int>>>> pq,pq1;
        for(int i=0;i<arr.size();i++){
            pq.push({1.0*arr[i]/arr.back(),{i,arr.size()-1}});
        }
        pq1=pq;
        // while(!pq1.empty()){
        //     double c=pq1.top().first;
        //     int d=pq1.top().second.first;
        //     int e=pq1.top().second.second;
        //     cout<<c<<" "<<d<<" "<<e<<endl;
        //     pq1.pop();
        // }
        while (k>1) {
            pair<int, int> c = pq.top().second;
            pq.pop();
            c.second--;
            k--;
            // cout<<c.first<<" "<<c.second<<endl;
            pq.push({1.0 * arr[c.first] / arr[c.second], {c.first, c.second}});
        }
        pair<int,int>c=pq.top().second;
        return {arr[c.first],arr[c.second]};
    }
};