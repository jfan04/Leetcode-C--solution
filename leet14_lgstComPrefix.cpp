class Solution{
public:
     string longestCommonPrefix(vector<string> &strs){
     	if(strs.size()==0) return "";
     	string prefix=strs[0];
     
     	for(int i=1;i<strs.size();i++){
           int len1=prefix.length();
           int len2=strs[i].length();
            if(len1==0||len2==0) return "";

            int len=min(len1,len2);
            int j;
             for(j=0;j<len;j++){
             	if(prefix[j]!=strs[i][j]){
             		break;
             	}
             }

             prefix=prefix.substr(0,j);
     	}
     	return prefix;
     }	
};