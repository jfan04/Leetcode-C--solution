class Solution{
public:
   vector<int> grayCode(int n){
   	    vector<int> ret;
        
        int num=1<<n;
        for(int i=0;i<num;i++){
            ret.push_back((i>>1)^i);
        }
        return ret;
   }	
};