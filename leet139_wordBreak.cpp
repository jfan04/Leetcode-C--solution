class Solution{
public:
    bool wordBreak(string s,unordered_set<string> &dict){
       vector<bool> word(s.size()+1,false);
          
        word[0]=true;
        for(int i=1;i<=s.size();i++){
        	for(int j=i-1;j>=0;j--){
        		if(word[j]&&dict.find(s.substr(j,i-j))!=dict.end()){
        			word[i]=true;
        			break;
        		}
        	}
        } 

        return word[s.size()];
    }	
};