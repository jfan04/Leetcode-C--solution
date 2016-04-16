class Solution{
private:
    vector<vector<string>> ret;	
public:
   void dfs(string s,vector<string> &path,vector<vector<string>> &ret){
        if(s.size()==0){
        	ret.push_back(path);
        	return;
        }

        for(int i=0;i<s.size();i++){
        	int start=0;
        	int end=i;

        	while(start<end){
        		if(s[start]==s[end]){
        			start++;
        			end--;
        		}
        		else{
        			break;
        		}
        	}
        	if(start>=end){
        		path.push_back(s.substr(0,i+1));
        		dfs(s.substr(i+1),path,ret);
        		path.pop_back();
        	}

        }
   }
   vector<vector<string>> partition(string s){
        ret.clear();
        vector<string> path;
        dfs(s,path,ret);
        return ret;
   }	
};