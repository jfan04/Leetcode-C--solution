class  Solution{
public:
	  bool isMatch(const char *s,const char *p){

		  const char *star=NULL;
		  const char *rs=NULL;

		  while(*s){
		  	if(*p==*s||*p=='?'){
		  		p++;
		  		s++;
		  		continue;
		  	}
		  	if(*p=='*'){
		  		star=p;
		  		rs=s;
		  		p++;
		  		continue;
		  	}
		  	if(star!=NULL){
		  		p=star+1;
		  		s=rs+1;
		  		rs++;
		  		continue;
		  	}

		  	return false;
		  }

		  while(*p=='*') p++;
		  return *p==NULL;
	  	
	  }
};