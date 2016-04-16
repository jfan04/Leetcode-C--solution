class solution{
public:
   int atoi(string str){
	   if(str.size()==0) return 0;
	   int i=0;
	   bool sign=true;
	   while(str[i]==' '){
	   	   i++;
	   }

	   if(str[i]=='+'||str[i]='-'){
	   	      i++;
	   	      if(str[i]=='-'){
	   	      	sign=false;
	   	      }
	   }

	   long long ret=0;

	   while(str[i]>='0'&&str[i]<='9'){
	   	ret=ret*10+(str[i]-'0');
	   	if(ret>INT_MAX) return sign?INT_MAX:INT_MIN;
	   	      i++;
	   }

	   if(sign) return (int) ret;
	   else{
	   	return (int)(-ret);
	   }
   }	
};