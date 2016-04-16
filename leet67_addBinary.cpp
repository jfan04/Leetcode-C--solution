class Solution{
public:
   string addBinary(string a,string b){
      string ret="";
   	  int len1=a.length();
   	  int len2=b.length();
   	  int len=min(len1,len2);

   	  if(len1==0)return b;
   	  if(len2==0)return a;
   	  if(len1==0&&len2==0) return ret; 
   	 
   	  int carry=0;

   	  reverse(a.begin(),a.end());
   	  reverse(b.begin(),b.end());

   	  for(int i=0;i<len;i++){
   	  		int sum=(a[i]-'0')+(b[i]-'0')+carry;
            ret+=(sum%2+'0');
            carry=sum/2;
   	  	}

   	  if(len1>=len2){
         for(int i=len;i<len1;i++){
         	int sum=(a[i]-'0')+carry;
         	ret+=(sum%2+'0');
         	carry=sum/2;
         }

         if(carry==1) ret+='1';  	
   	  }

   	  if(len1<len2){
         for(int i=len;i<len2;i++){
         	int sum=(b[i]-'0')+carry;
         	ret+=(sum%2+'0');
         	carry=sum/2;
         }

         if(carry==1) ret+='1';  	
   	  }

   	  reverse(ret.begin(),ret.end());
   	  return ret;

   }	
};