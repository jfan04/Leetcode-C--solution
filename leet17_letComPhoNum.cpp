class Solution{
private:
      vector<vector<char>> numToChar={
      	             {'a','b','c','!'},
      	             {'d','e','f','!'},
      	             {'g','h','i','!'},
      	             {'j','k','l','!'},
      	             {'m','n','o','!'},
      	             {'p','q','r','s'},
      	             {'t','u','v','!'},
      	             {'w','x','y','z'}

      }	;
public:
	  void dfs(string digits,int idx,string tmp,vector<string> &ret){
	  	if(idx==digits.size()){
	  		ret.push_back(tmp);
	  		return;
	  	}

	  	int num=digits[idx]-'2';

	  	for(int i=0;i<numToChar[num].size();i++){

	  		if(numToChar[num][i]!='!'){
	  			dfs(digits,idx+1,tmp+numToChar[num][i],ret);
	  		}
	  		else{
	  			continue;
	  		}
	  	}

	  }

      vector<string> letterCombinations(string digits){
      	vector<string> ret;
      	ret.clear();
      	if(digits.size()==0) return ret;
      	dfs(digits,0,"",ret);
      	return ret;
      }	
};