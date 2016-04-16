class Solution{
public:
    vector<string> anagrams(vector<string> &strs){

    	vector<string> ret;
    	map<string,int> anagrams;

    	for(int i=0;i<strs.size();i++){

    		string s=strs[i];

    		sort(s.begin(),s.end());

    		if(anagrams.find(s)==anagrams.end()){
    			anagrams[s]=i;
    		}

    		else{

    			if(anagrams[s]>=0){
    				ret.push_back(strs[anagrams[s]]);
    				anagrams[s]=-1;
    			}
    			ret.push_back(strs[i]);
    		}
    	}

    	return ret;

    }	
};