class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        v=matrix;
        vector<int>v1;
    
        int top = 0, bottom = v.size() - 1;
        int left = 0, right = v[0].size() - 1;
    
        while (1)
        {
            if (left > right) {
                break;
            }
            // print top row
            for (int i = left; i <= right; i++) {
                v1.push_back(v[top][i]);
            }
            top++;
    
            if (top > bottom) {
                break;
            }
            // print right column
            for (int i = top; i <= bottom; i++) {
                v1.push_back(v[i][right]);
            }
            right--;
    
            if (left > right) {
                break;
            }
            // print bottom row
            for (int i = right; i >= left; i--) {
                v1.push_back(v[bottom][i]);
            }
            bottom--;
    
            if (top > bottom) {
                break;
            }
            // print left column
            for (int i = bottom; i >= top; i--) {
                v1.push_back(v[i][left]);
            }
            left++;
        }
        return v1;
    }
};