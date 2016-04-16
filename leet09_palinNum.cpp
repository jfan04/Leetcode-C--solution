class Solution{
public:
     bool isPalindrome(int x){

     	if(x<0) return false;
     	if(x==0) return true; 
     	int base=1;
     	while(x/base>=10){
     		base*=10;
     	}

     	int leftNUm,rightNum;

     	while(x){

     		leftNum=x/base;
     		rightNum=x%10;

     		if(leftNum!=rightNum) return false;

     		x=x-base*leftNum;
     		base/=100;
     		x/=10;
     	}
     	return true;
     }	
};