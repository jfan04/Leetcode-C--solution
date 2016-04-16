class Solution{
public:
   vector<vector<int>> subsetsWithDup(vector<int> &S){
   	    vector<vector<int>> ret;
   	    ret.clear();
   	    if(S.size()==0) return ret;
   	    vector<int> path;
   	    sort(S.begin(),S.end());
   	    dfs(ret,S,path,0);
   	    return ret;
   }

   void dfs(vector<vector<int>> &ret,vector<int> &S,vector<int> &path,int idx){
   	    ret.push_back(path);
   	    for(int i=idx;i<S.size();i++){
   	    	if(i!=idx&&S[i]==S[i-1]) continue;
   	    	path.push_back(S[i]);
   	    	dfs(ret,S,path,i+1);
   	    	path.pop_back();
   	    }
   }	
};