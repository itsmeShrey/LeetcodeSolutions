class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int prod1=v[0],prod2=v[0],result=v[0];
        for (int i = 1; i < v.size(); i++) {
            int temp = max({v[i],prod1*v[i],prod2*v[i]});
            prod2 = min({v[i],prod1*v[i],prod2*v[i]});
            prod1 = temp;
            result=max(result,prod1);
        }
        return result;
    }
};