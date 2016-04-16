class Solution{
public:
    bool isInterleave(string s1,string s2,string s3){
    	int len1=s1.length();
    	int len2=s2.length();
    	int len3=s3.length();

    	if(len1+len2!=len3) return false;

    	vector<vector<bool>> f(len1+1,vector<bool>(len2+1,false));
    	f[0][0]=true;

    	for(int i=0;i<=len1;i++){
             for(int j=0;j<=len2;j++){
                 int len=i+j;
                 if(i>=1&&s3[len-1]==s1[i-1]) f[i][j]=f[i-1][j];
                 if(j>=1&&s3[len-1]==s2[j-1]) f[i][j]=f[i][j]||f[i][j-1];
             }
    	}
       return f[len1][len2];
    }	
};