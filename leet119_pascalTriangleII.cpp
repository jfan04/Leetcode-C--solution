class Solution{
public:
   vector<int> getRow(int rowIndex){
   	   vector<int> ret;
        if(rowIndex==0){
            ret.push_back(1);
        }
        else if(rowIndex==1){
            ret.push_back(1);
            ret.push_back(1);
        }
        else{
            vector<int> parent=getRow(rowIndex-1);
            for(int i=0;i<=rowIndex;i++){
                if(i==0||i==rowIndex){
                    ret.push_back(1);
                }
                else{
                    ret.push_back(parent[i-1]+parent[i]);
                }
            } 
        }
        
        return ret;
   }	
};