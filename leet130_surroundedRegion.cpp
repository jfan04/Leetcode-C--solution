// Runtime error
class Solution{
public:
     void dfs(vector<vector<char>> &board,int i,int j,int m,int n){
        board[i][j]='*';
        if(i>0&&board[i-1][j]=='O'){
            dfs(board,i-1,j,m,n);
        }
        if(i<m-1&&board[i+1][j]=='O'){
            dfs(board,i+1,j,m,n);
        }
        if(j>0&&board[i][j-1]=='O'){
            dfs(board,i,j-1,m,n);
        }
        if(j<n-1&&board[i][j+1]=='O'){
            dfs(board,i,j+1,m,n);
        }
    }
    
    void solve(vector<vector<char>> &board) {
        int m=board.size();
        if(m==0) return;
        int n=board[0].size();
        
        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(board,i,0,m,n);
            }
        }
        
        for(int i=0;i<m;i++){
            if(board[i][n-1]=='O'){
                dfs(board,i,n-1,m,n);
            }
        }
        
        for(int j=0;j<n;j++){
            if(board[0][j]=='O'){
                dfs(board,0,j,m,n);
            }
        }
        
        for(int j=0;j<n;j++){
            if(board[m-1][j]=='O'){
                dfs(board,m-1,j,m,n);
            }
        }
        
        
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='*'){
                    board[i][j]='O';
                }
            }
        }
    }	
};

  /* soluton 2:AC
class Solution {
public:
    void vist(vector<vector<char> >&board, int x , int y) {
        typedef pair<int,int> state;
        
        int n = board.size();
        int m = board.front().size();
        
        auto isValid = [&](const state& s) {
            int x = s.first;
            int y = s.second;
            if(x < 0 || x >= n || y < 0 || y >= m || board[x][y] != 'O')
                return false;
            return true;
        };
        auto expand = [&](const state& s) {
            int x = s.first;
            int y = s.second;
            vector<state> result;
            const state newState[] = {{x+1,y} , {x-1,y} , {x,y+1} , {x,y-1}};
            
            for(int i = 0 ; i < 4 ; ++i) {
                if(isValid(newState[i])) {
                    result.push_back(newState[i]);
                    board[newState[i].first][newState[i].second] = '+';
                }
            }
            return result;
        };
        
        queue<state> que;
        state start = {x , y};
        if(isValid(start)) {
            que.push(start);
            board[x][y] = '+';
        }
        while(!que.empty()) {
            state curr = que.front(); que.pop();
            auto result = expand(curr);
            for(auto x : result) que.push(x);
        }
    }
    void solve(vector<vector<char>> &board) {
        if(board.empty()) return ;
        //n * m board
        int n = board.size();
        int m = board.front().size();
        for(int i = 0 ; i < n ; ++i) {
            vist(board , i , 0);
            vist(board , i , m-1);
        }
        for(int i = 0 ; i < m ; ++i) {
            vist(board , 0 , i);
            vist(board , n-1 , i);
        }
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < m ; ++j) {
                if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if(board[i][j] == '+') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};*/