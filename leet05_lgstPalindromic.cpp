class Solution{
public:
	string findPal(string s,int left,int right){
		if(left<0) return s.substr(left+1,1);
		if(right>=s.size()) s.substr(right-1,1);
		while(left>=0&&right<s.size()){
			if(s[left]!=s[right]){
				break;
			}

			left--;
			right++;
		}

		left++;
		right--;

		return s.substr(left,right-left+1);

	}
	string longestPalindrome(string s){

		if(s.size()==0) return "";
		string ret="";
		for(int i=0;i<s.size();i++){

			string str1=findPal(s,i-1,i+1);
			if(str1.size()>ret.size()){
				ret=str1;
			}
			string str2=findPal(s,i,i+1);
			if(str2.size()>ret.size()){
				ret=str2;
			}

		}

		return ret;
		/*int len=s.length();
		bool f[len][len];
		int max=1;
		int start,end;

		for(int i=0;i<len;i++){
			for(int j=0;j<len;j++){
				if(i>=j){
					f[i][j]=true;
				}
				else{
					f[i][j]=false;
				}
			}
		}

		for(int j=1;j<len;j++){
			for(int i=0;i<j;i++){
				if(s[i]==s[j]){
					f[i][j]=f[i+1][j-1];
					if(f[i][j]&&(j-i+1>max)){
						max=j-i+1;
						start=i;
						end=j;
					}
				}
			}

		}

		return s.substr(start,max);*/


	}
};