class Solution {
public:
    int compareVersion(string version1, string version2) {
        int val1,val2;
        int n1=0,n2=0;
        
        while(n1<version1.size()||n2<version2.size()){
            val1=0;
            while(n1<version1.size()){
                if(version1[n1]=='.'){
                    n1++;
                    break;
                }
                val1=val1*10+(version1[n1]-'0');
                n1++;
            }
            
            val2=0;
            while(n2<version2.size()){
                if(version2[n2]=='.'){
                    n2++;
                    break;
                }
                val2=val2*10+(version2[n2]-'0');
                n2++;
            }
            
            if(val1>val2) return 1;
            if(val1<val2) return -1;
        }
        return 0;
    }
};