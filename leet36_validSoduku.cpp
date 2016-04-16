class Solution{
public:
    bool isValidSudoku(vector<vector<char>> &board){
    	for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.') continue;
                
                for(int k=0;k<board[0].size();k++){
                    if(k==j) continue;
                    if(board[i][k]==board[i][j]) return false;
                }
                
                for(int m=0;m<board.size();m++){
                    if(m==i) continue;
                    if(board[m][j]==board[i][j]) return false;
                }
                
                for(int n=i/3*3;n<i/3*3+3;n++){
                    for(int l=j/3*3;l<j/3*3+3;l++){
                        if(n==i||l==j) continue;
                        if(board[n][l]==board[i][j]) return false;
                    }
                }
            }
        }
        return true;

    }	
};