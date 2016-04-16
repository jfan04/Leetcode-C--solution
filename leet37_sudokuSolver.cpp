class Solution{
public:
     bool isValid(vector<vector<char>> &board,int a, int b){
        
        for(int i=0;i<board.size();i++){
            if(i!=a&&board[i][b]==board[a][b]){
                return false;
            }
        }
        for(int j=0;j<board[0].size();j++){
            if(j!=b&&board[a][j]==board[a][b]){
                return false;
            }
        }
        
        int x=a/3*3;
        int y=b/3*3;
        
        for(int m=0;m<3;m++){
            for(int n=0;n<3;n++){
                if(x+m!=a&&y+n!=b&&board[x+m][y+n]==board[a][b]){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool solveSudokudfs(vector<vector<char>> &board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(int k=1;k<=9;k++){
                        board[i][j]='0'+k;
                        if(isValid(board,i,j)&&solveSudokudfs(board)){
                            return true;
                        }
                       board[i][j]='.';
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char> > &board) {
        solveSudokudfs(board);
    }
};