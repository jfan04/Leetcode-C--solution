class Solution{
public:
    int lengthOfLastWord(const char *s){

    	int len=strlen(s);
    	while(s[len-1]==' ') len--;

    	int ret=0;

    	for(int i=len-1;i>=0;i--){
    		if(s[i]!=' ') ret++;
    		else break;
    	}
    	return ret;

    }	
};