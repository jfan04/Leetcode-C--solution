class Solution{
public:
	static bool cmp(string a, string b){
		return a+b>b+a;
	}
    string largestNumber(vector<int> &nums){
        vector<string> tmp;
        for(int i=0;i<nums.size();i++){
        	tmp.push_back(to_string(nums[i]));
        }

        sort(tmp.begin(),tmp.end(),cmp);
        
        string ret="";
        for(int i=0;i<tmp.size();i++){
        	ret+=tmp[i];
        }

        if(ret[0]=='0') return "0";
        return ret;
    }	
};