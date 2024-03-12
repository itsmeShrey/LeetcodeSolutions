class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>& board,vector<int>delrow,vector<int>delcol){
        vis[i][j]=1;
        int n=board.size(),m=board[0].size();
        for(int row=0;row<4;row++){
            int c=delrow[row]+i;
            int d=delcol[row]+j;
            if(c>=0 && c<n && d>=0 && d<m && vis[c][d]==0 && board[c][d]=='O'){
                dfs(c,d,vis,board,delrow,delcol);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>delrow={-1,0,+1,0};
        vector<int>delcol={0,+1,0,-1};
        for(int j=0;j<m;j++){
            if(board[0][j]=='O' && vis[0][j]==0){
                dfs(0,j,vis,board,delrow,delcol);
            }
            if(board[n-1][j]=='O' && vis[n-1][j]==0){
                dfs(n-1,j,vis,board,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][0]=='O' && vis[i][0]==0){
                dfs(i,0,vis,board,delrow,delcol);
            }
            if(board[i][m-1]=='O' && vis[i][m-1]==0){
                dfs(i,m-1,vis,board,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && vis[i][j]==0){
                    board[i][j]='X';
                }
            }
        }
    }
};