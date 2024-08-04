class neighborSum {
public:
vector<vector<int>>grid;
    neighborSum(vector<vector<int>>& v) {
        grid=v;
    }
    
    int adjacentSum(int value) {
       int sum=0;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==value){
                if (i > 0) sum += grid[i-1][j];
                if (j > 0) sum += grid[i][j-1];
                if (i < grid.size()-1) sum += grid[i+1][j];
                if (j < grid[0].size()-1) sum += grid[i][j+1];
            }
        }
       }
       return sum;
    }
    
    int diagonalSum(int value) {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == value) {
                    if (i > 0 && j > 0) {
                        sum += grid[i-1][j-1];
                    }
                    if (i > 0 && j <grid[0].size()-1) {
                        sum += grid[i-1][j+1];
                    }
                    if (i < grid.size()-1 && j > 0) {
                        sum += grid[i+1][j-1];
                    }
                    if (i < grid.size()-1 && j <grid[0].size()-1) {
                        sum += grid[i+1][j+1];
                    }
                }
            }
        }
        return sum;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */