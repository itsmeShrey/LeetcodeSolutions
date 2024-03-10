class Solution {
public:
    void dfs(int sr,int sc,vector<vector<int>>image,vector<vector<int>>&v,int color,int ini){
        v[sr][sc]=color;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int c=sr+i;
                int d=sc+j;
                if(c>=0 && c<image.size() && d>=0 && d<image[0].size() && v[c][d]!=color && image[c][d]==ini && abs(i)!=abs(j) ){
                    dfs(c,d,image,v,color,ini);
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ini=image[sr][sc];
        vector<vector<int>>v;
        v=image;
        dfs(sr,sc,image,v,color,ini);
        return v;
    }
};