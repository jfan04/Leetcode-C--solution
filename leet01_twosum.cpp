class Solution{
public:
	vector<int> twoSum(vector<int> &numbers,int target){

		vector<int> ret(2,-1);
		unordered_map<int,int>mp;
		int index1,index2;

		for(int i=0;i<numbers.size();i++){

			if(mp.find(target-numbers[i])==mp.end()){

				mp[numbers[i]]=i;
			}

			else{
				index1=mp[target-numbers[i]]+1;
				index2=i+1;
				ret[0]=index1;
				ret[1]=index2;

				return ret;
			}
		}
	}
};