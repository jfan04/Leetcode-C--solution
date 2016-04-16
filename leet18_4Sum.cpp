class Solution{
public:
	 vector<vector<int>> fourSum(vector<int> &num,int target){
	 	vector<vector<int>> ret;
	 	if(num.size()<4) return ret;
	 	sort(num.begin(),num.end());
	 	vector<int> tmp;

	 	for(int i=0;i<num.size()-3;i++){
	 		if(i!=0&&num[i]==num[i-1]) continue;
	 		for(int j=i+1;j<num.size()-2;j++){
	 			if(j!=i+1&&num[j]==num[j-1]) continue;
	 			tmp.clear();
	 			tmp.push_back(num[i]);
	 			tmp.push_back(num[j]);
	 			int tmptarget=target-num[i]-num[j];
	 			int left=j+1,right=num.size()-1;
	 			while(left<right){
	 				if(left!=j+1&&num[left]==num[left-1]){
	 					left++;
	 					continue;
	 				}
	 				if(right!=num.size()-1&&num[right]==num[right+1]){
	 					right--;
	 					continue;
	 				}

	 				if(num[left]+num[right]==tmptarget){
	 					tmp.push_back(num[left]);
	 					tmp.push_back(num[right]);
	 					ret.push_back(tmp);
	 					tmp.pop_back();
	 					tmp.pop_back();
	 					left++;
	 					right--;
	 				}

	 				else if(num[left]+num[right]>tmptarget){
	 					right--;
	 				}
	 				else{
	 					left++;
	 				}
	 			}

	 		}
	 	}

	 	return ret;
	 }
};