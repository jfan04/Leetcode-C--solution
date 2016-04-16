class Solution{
public:
	void combinationdfs(vector<int> &candidates,vector<vector<int>> &ret, vector<int> &path,int sum,int indice,int target){
		if(sum>target) return ;
		if(sum==target){
			ret.push_back(path);
			return;
		}

		for(int i=indice;i<candidates.size();i++){
			path.push_back(candidates[i]);
			combinationdfs(candidates,ret,path,sum+candidates[i],i,target);
			path.pop_back();
		}
	}
     vector<vector<int>> combinationSum(vector<int> &candidates,int target){

     	vector<vector<int>> ret;
     	ret.clear();
     	vector<int> tmp;
     	sort(candidates.begin(),candidates.end());
     	combinationdfs(candidates,ret,tmp,0,0,target);
     	return ret;
     }	
};