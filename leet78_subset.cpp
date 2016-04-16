class Solution{
public: 
    vector<vector<int>> subsets(vector<int> &S){
    	vector<vector<int>> ret;
        ret.clear();
        sort(S.begin(),S.end());
        vector<int> path;
        dfs(S,ret,path,0);
        return ret;
    }
    
    void dfs(vector<int> &S,vector<vector<int>> &ret,vector<int> &path,int idx){

         ret.push_back(path);
    
         for(int i=idx;i<S.size();i++){
             path.push_back(S[i]);
             dfs(S,ret,path,i+1);
             path.pop_back();
         }
    }	
};