class Solution{
public:
   int minDistance(string word1,string word2){
   	
   	vector<vector<int>> f(word1.size()+1,vector<int>(word2.size()+1));
    
    f[0][0]=0;
    for(int i=1;i<=word1.size();i++){
    	f[i][0]=i;
    }
    for(int i=1;i<=word2.size();i++){
    	f[0][i]=i;
    }

    for(int i=1;i<=word1.size();i++){
    	for(int j=1;j<=word2.size();j++){
    		if(word1[i-1]==word2[j-1]){
    			f[i][j]=f[i-1][j-1];
    		}
    		else{
    			f[i][j]=f[i-1][j-1]+1;//denote replace;
    			f[i][j]=min(f[i][j],min(f[i-1][j],f[i][j-1])+1);//f[i-1][j] denotes deletition,f[i][j-1] denotes insertion;
    		}
    	}
    }

    return f[word1.size()][word2.size()];

   }	
};