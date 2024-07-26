class Solution {
public:
void shortest_distance(vector<vector<int>>&matrix) {
		int n = matrix.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == -1) {
					matrix[i][j] = 1e9;
				}
				if (i == j) matrix[i][j] = 0;
			}
		}

		for (int k = 0; k < n; k++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrix[i][j] = min(matrix[i][j],matrix[i][k] + matrix[k][j]);
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == 1e9) {
					matrix[i][j] = -1;
				}
			}
		}
	}
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> matrix(n+1,vector<int>(n+1,-1));
        for(auto i:edges){
            matrix[i[0]][i[1]]=i[2];
            matrix[i[1]][i[0]]=i[2];
        }
        shortest_distance(matrix);

        vector<int> nodes(n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<=distanceThreshold){
                    nodes[i]++;
                    nodes[j]++;
                }
            }
        }

        int mn=INT_MAX,ans=0;
        for(int i=0;i<n;i++){
            if(nodes[i]<=mn){
                mn=nodes[i];
                ans=i;
            }
        }
        return ans;
    }
};