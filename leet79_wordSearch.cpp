class Solution{
public:
    bool exist(vector<vector<char>> &board,string word){
    	for(int i=0;i<board.size();i++){
    		for(int j=0;j<board[0].size();j++){
    			if(board[i][j]==word[0]){
    				bool ret=find(board,word,i,j,0);
    				if(ret) return true;
    			}
    		}
    	}

    }

    bool find(vector<vector<char>> &board,string word,int i,int j,int idx){
    	if(idx==word.size()) return true;

    	if(i>=0&&i<board.size()&&j>=0&&j<board[0].size()&&board[i][j]=word[idx]){
    		char tmp=board[i][j];
    		board[i][j]='*';
    		idx++;

    		bool ret=find(board,word,i,j-1,idx)
    		        |find(board,word,i-1,j,idx)
    		        |find(board,word,i,j+1,idx)
    		        |find(board,word,i+1,j,idx);
    		if(ret)  return true;
    		else {
                 board[i][j]=tmp;
                 return false; 
    		} 
    	}

    	return false;
    }	
};