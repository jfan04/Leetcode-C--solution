class Solution{
public:
	void combinationdfs(vector<vector<int>> &ret,vector<int> &candidates,vector<int> &path,int sum,int index,int target){
		if(sum>target) return;
		if(sum==target){
			ret.push_back(path);
			return;
		}

		for(int i=index;i<candidates.size();i++){
			path.push_back(candidates[i]);
            combinationdfs(ret,candidates,path,sum+candidates[i],i+1,target);
            path.pop_back();
            while(i<candidates.size()-1&&candidates[i]==candidates[i+1]) i++;
		}
	}
    vector<vector<int>> combinationSum2(vector<int> &candidates,int target) {

    	vector<vector<int>> ret;
    	ret.clear();
    	vector<int> path;
    	sort(candidates.begin(),candidates.end());
    	combinationdfs(ret,candidates,path,0,0,target);
    	return ret;
    }	
};