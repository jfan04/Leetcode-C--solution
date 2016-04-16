class Solution{
public:
     void nextPermutation(vector<int> &num){
     	int i,j;

     	for(i=num.size()-1;i>0;i--){
     		if(num[i-1]<num[i]){
     			break;
     		}

     	}

     	if(i>0){
     		for(j=num.size()-1;j>=i;j--){
     		if(num[j]>num[i-1]){
     			break;
     		}
	     }

	     	swap(num[i-1],num[j]);
	     	reverse(num.begin()+i,num.end());
     	}

     	else{
     		reverse(num.begin(),num.end());
     	}
     	
     }	
};