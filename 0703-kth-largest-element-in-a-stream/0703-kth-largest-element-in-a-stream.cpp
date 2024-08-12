class KthLargest {
public:
    int c;
    priority_queue<int,vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        for(auto l:nums){
            pq.push(l);
            if(pq.size()>k){
                pq.pop();
            }
        }
        c=k;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>c){
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */