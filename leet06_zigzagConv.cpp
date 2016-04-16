class Solution{
public:
     string convert(string s,int nRows){
     	if(nRows<=1||s.length()==0) return s;

     	string ret="";
     	int len=s.length();

     	for(int i=0;i<len&&i<nRows;i++){

     		int index=i;
     		ret+=s[index];
     		for(int j=1;index<len;j++){

     			if(i==0||i==nRows-1){
     				index+=2*(nRows-1);
     			}

     			else{

     				if(j%2){
     					index+=2*(nRows-1-i);
     				}
     				else{
     					index+=2*i;
     				}
     			}

     			if(index<len){
     				ret+=s[index];
     			}	
     		}
     	}

     	return ret;

     }	
};