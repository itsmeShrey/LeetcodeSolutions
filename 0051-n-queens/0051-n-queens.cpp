class Solution {
public:
    void f(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&leftrow,vector<int>&upperdiagonal,vector<int>&leftdiagonal,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(leftrow[i]==0 && leftdiagonal[i+col]==0 && upperdiagonal[n-1+col-i]==0){
                board[i][col]='Q';
                leftrow[i]=1;
                leftdiagonal[i+col]=1;
                upperdiagonal[n-1+col-i]=1;
                f(col+1,board,ans,leftrow,upperdiagonal,leftdiagonal,n);
                board[i][col]='.';
                leftrow[i]=0;
                leftdiagonal[i+col]=0;
                upperdiagonal[n-1+col-i]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>leftrow(n,0),upperdiagonal(2*n-1,0),leftdiagonal(2*n-1,0);
        f(0,board,ans,leftrow,upperdiagonal,leftdiagonal,n);
        for(auto l:ans){
            for(auto m:l){
                cout<<m<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
};