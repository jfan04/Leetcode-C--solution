class Solution{
public:
     string simplifyPath(string path){
     	assert(path[0]=='/');
        string ret="";
        vector<string> vec;
        int i=0;

        while(i<path.size()){
        	int end=i+1;

        	while(end<path.size()&&path[end]!='/'){
        		end++;
        	}

        	string tmp=path.substr(i+1,end-i-1);

        	if(tmp.size()>0){

        		if(tmp==".."){
        			if(!vec.empty())
        			     vec.pop_back();
        		} 

        		else if(tmp!="."){
        			vec.push_back(tmp);
        		}
        	}
        	  i=end;
        }

        if(vec.empty()) return "/";

        for(int i=0;i<vec.size();i++){
        	ret+=('/'+ vec[i]);
        }

        return ret;

     }	
};