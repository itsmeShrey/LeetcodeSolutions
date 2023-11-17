class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>>v;
        v=board;
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        unordered_map<char,int> c ;
        int j= 0 ;
        int i=0 ;
        for( i =0 ; i < 9 ;i++){
            for( j=0 ; j< 9 ;j++){
                if(v[i][j] != '.'){
                    b[v[i][j]]++;
                }
                if(v[j][i]!='.'){
                    c[v[j][i]]++;
                }
                if(b[v[i][j]]>1){
                    return false;
                }
                if(c[v[j][i]]>1){
                    return false ;
                }
            }
            b.clear();
            c.clear();
        }
        for(i=0 ; i < 9 ;i+=3){
            for(j=0 ; j <9 ;j+=3){
                a.clear();
                for(int x = i ; x < i+3 ; x++){
                    for(int y = j ; y < j+3; y++){
                        if(v[x][y]!='.'){
                            a[v[x][y]]++;
                        }
                        if(a[v[x][y]]>1) {
                            return false ;
                        }
                    }
                }
            }
        }
        return true;
    }

};