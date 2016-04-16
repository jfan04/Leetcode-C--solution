class Solution{
public:
	int lengthOfLongestSubstring(string s){

		int loc[255];
		memset(loc,-1,sizeof(loc));

		int idx=-1;  
		int ret=0;

		for(int i=0;i<s.length();i++){

			if(loc[s[i]]>idx){
			    idx=locus[s[i]];
			}

			if(i-idx>ret){
				ret=i-idx;
			}

			locus[s[i]]=i;
		}

		return ret;

	}
};