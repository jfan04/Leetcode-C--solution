class Solution{	
public:
   int candy(vector<int> &ratings){
   	  if(ratings.size()==0) return 0;
   	  if(ratings.size()==1) return 1;

   	  vector<int> candyNum(ratings.size());
   	  candyNum[0]=1;

   	  for(int i=0;i<ratings.size()-1;i++){
   	  	if(ratings[i+1]>ratings[i]){
   	  		candyNum[i+1]=candyNum[i]+1;
   	  	}
   	  	else{
   	  		candyNum[i+1]=1;
   	  	}
   	  }
    
   	  for(int i=ratings.size()-2;i>=0;i--){
   	  	if(ratings[i]>ratings[i+1]){
   	  		int m=candyNum[i+1]+1;
   	  		if(m>candyNum[i]){
   	  			candyNum[i]=m;
   	  		}
   	  	}
   	  }
      
      int ret=0;
   	  for(int i=0;i<ratings.size();i++){
          ret+=candyNum[i];
   	  }

   	  return ret;
   }
};