class Solution{
public:
     int strStr(char *haystack, char *needle){
     	int i,j;
        
        for(i=j=0;haystack[i]&&needle[j];){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        
        if(!needle[j]){
            return i-j;
        }
        
        else return -1;
     }	
};