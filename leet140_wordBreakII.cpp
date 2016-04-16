class Solution{
public:
  void dfs(string s,unordered_set<string> &dict,string tmp,int idx,vector<string> &ret,vector<bool> &dp){
              string st;
          for(int len=1;len+idx<s.size()+1;len++){
              if(dp[len+idx]&&dict.count(s.substr(idx,len))>0){
                  st=s.substr(idx,len);
                  if(len+idx<s.size()){
                    dfs(s,dict,tmp+st+" ",idx+len,ret,dp);
                  }
                  else{
                    ret.push_back(tmp+st);
                    return;
                  }
              }
          }
  }
   vector<string> wordBreak(string s, unordered_set<string> dict){
    vector<bool> dp(s.size()+1,false);
          
        dp[0]=true;
        for(int i=1;i<=s.size();i++){
          for(int j=i-1;j>=0;j--){
            if(dp[j]&&dict.find(s.substr(j,i-j))!=dict.end()){
              dp[i]=true;
              break;
            }
          }
        } 

        vector<string> ret;
        if(dp[s.size()]){
          dfs(s,dict,"",0,ret,dp);    
        }
        return ret;
};