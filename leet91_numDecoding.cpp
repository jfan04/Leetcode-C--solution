class Solution{
public:
    int numDecodings(string s){
       if(s.length()==0) return 0;
        
        vector<int> f(s.length(),0);
        
        for(int i=0;i<s.length();i++){
            if(i==0){
                if(s[i]>='1'&&s[i]<='9'){
                    f[i]=1;
                }
            }
            
            else{
                string str=s.substr(i-1,2);
                if(str>="10"&&str<="26"){
                    if(i>1){
                        f[i]+=f[i-2];
                    }
                    else{
                        f[i]+=1;
                    }
                }
                if(s[i]>='1'&&s[i]<='9'){
                    f[i]+=f[i-1];
                }
            }
        }
        
        return f[s.length()-1];

    }	
};