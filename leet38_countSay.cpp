class Solution{
public:
	string iter(string s){
		string ret;
		int cnt=1;
		char pre=s[0];

		for(int i=1;i<s.length();i++){
			if(s[i]==pre) cnt++;
			else{
				char tmp=cnt+'0';
				ret=ret+tmp+pre;
				pre=s[i];
				cnt=1;
			}
		}
		char tmp=cnt+'0';
		ret=ret+tmp+pre;
		return ret;
	}
     string countAndSay(int n){
     	string ret="1";
     	int j=1;
     	while(j<n){
     		ret=iter(ret);
     		j++;
     	}

     	return ret;
     	
     }	
};