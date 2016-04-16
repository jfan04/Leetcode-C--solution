class Solution{
public:
    bool isNumber(string s){
    	int start=0;
    	int end=s.length()-1;
    	bool num=false;
    	bool dot=false;
    	bool e=false;

    	for(int i=start;i<=end;i++){
    		if(s[i]!=' ') break;
    		start++;
    	}

    	for(int i=end;i>start;i--){
    		if(s[i]!=' ') break;
    		end--;
    	}

    	if(s[start]=='+'||s[start]=='-') start++;
    	if(start>end) return false;

    	for(int i=start;i<=end;i++){
            if(s[i]>='0'&&s[i]<='9'){
            	num=true;
            }
            else if(s[i]=='e'||s[i]=='E'){
            	if(!num||e||i==end) return false;
            	e=true;
            }
            else if(s[i]=='.'){
            	if(dot||e) return false;
            	if(!num&&i==end) return false;
            	dot=true;
            }
            else if(s[i]=='+'||s[i]=='-'){
            	if(s[i-1]!='e'&&s[i-1]!='E') return false;
            	if(i==end) return false;
            }
            else return false;
    	}

    	return true;
    }	
};