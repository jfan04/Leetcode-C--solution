class Solution{
private:
   vector<string> ret;
   int pos[4];	
public: 
     bool check(string &s,int beg,int end){
     	string str(s,beg,end-beg+1);
     	if(str.size()==1){
     		return (str>="0"&&str<="9");
     	}
     	if(str.size()==2){
     		return (str>="10"&&str<="99");
     	}
     	if(str.size()==3){
     		return (str>="100"&&str<="255");
     	}
     	return false;
     } 

     void dfs(string s,int dep,int maxDep,int start){
     	if(dep==maxDep){
     		if(start==s.size()){
               addr="";
               int begin=0;
               for(int i=0;i<maxDep;i++){
               	  string ip(s,begin,pos[i]-begin+1);
               	  addr+=i==0?ip:'.'+ip;
               	  begin=pos[i]+1;
               }

               ret.push_back(addr);
     		}
            return; 
     	}

     	for(int i=start;i<s.size();i++){
              if(check(s,start,i)){
                   pos[dep]=i;
                   dfs(s,dep+1,maxDep,i+1);
              }
     	}
     }
     vector<string> restoreIpAddress(string s){
        ret.clear();
        dfs(s,0,4,0);
        return ret;
     }	
};