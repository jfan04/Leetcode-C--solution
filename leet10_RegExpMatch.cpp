class Solution{
public:
	bool isMatch(const char *s,const char *p){

		if(*p==0) return  *s==0;

		if(*(p+1)!='*'){

			if(*s==*p||(*p=='.'&&*s!='\0')){ // s=ab, p=.*c

				return isMatch(s+1,p+1);
			}

			else return false;
		}

		else{

			while(*s==*p||(*p=='.'&&*s!='\0')){

				if(isMatch(s,p+2)) return true;// s=abbb,p=ab*|p=ab*b;
				s++;
			}

			return isMatch(s,p+2);
		}
	}

};