class Solution{
public:
	void dfs(vector<int> &num,vector<vector<int>> &ret,int index){
		if(index==num.size()){
			ret.push_back(num);
		}

		else{
			    set<int> st;
				for(int i=index;i<num.size();i++){
					if(st.find(num[i])!=st.end()) continue;
				swap(num[i],num[index]);
				dfs(num,ret,index+1);
				swap(num[i],num[index]);
			}

	     }

		
	}
    vector<vector<int>> permuteUnique(vector<int> &num){
    	vector<vector<int>> ret;
    	ret.clear();
    	dfs(num,ret,0);
    	return ret;
    }	
};