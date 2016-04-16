class Solution{
public:
    vector<vector<int>> combine(int n,int k){
    	vector<vector<int>> ret;
        ret.clear();
        vector<int> path;
        for(int i=1;i<=n;i++){
             path.push_back(i);
             combinedfs(n,k,ret,path,i);
             path.pop_back();
        } 
        
        return ret;
    }
    
    void combinedfs(int n,int k,vector<vector<int>> &ret,vector<int> &path,int idx){
        if(path.size()==k){
            ret.push_back(path);
            return;
        }
         for(int i=idx+1;i<=n;i++){
             path.push_back(i);
             combinedfs(n,k,ret,path,i);
             path.pop_back();
         }
    }	
};