class Solution{
public:
       string recreat(string s){
        string ret="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                ret+=(s[i]-'A'+'a');
            }
            else if(s[i]>='a'&&s[i]<='z'){
                ret+=s[i];
            }
            else if(s[i]>='0'&&s[i]<='9'){
                ret+=s[i];
            }
            else{
                continue;
            }
        }
        
        return ret;
    }
    bool isPalindrome(string s) {
        s=recreat(s);
        if(s.size()==0)return true;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i]){
                return false;
            }
        }
        
        return true;
    }	
};