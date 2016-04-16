class Solution{
public:
     vector<int> findSubstring(string S,vector<string> &L){
     	vector<int> ret;
     	if(L.size()==0) return ret;
     	int wordNum=L.size();
     	int wordLen=L[0].size();
     	int strLen=S.size();
     	if(strLen<wordNum*wordLen) return ret;

     	unordered_map<string,int> mp;
     	unordered_map<string,int> cur;

     	for(int i=0;i<wordNum;i++){
     		mp[L[i]]++;
     	}

     	for(int i=0;i<=strLen-wordNum*wordLen;i++){

     		int j;
     		cur.clear();
     		for(j=0;j<wordNum;j++){
     			string word=S.substr(i+j*wordLen,wordLen);
     			if(mp.find(word)==mp.end()){

     				break;
     			}

     			else{
     				cur[word]++;
     			}

     			if(cur[word]>mp[word]){
     				break;
     			}

     		}
     		if(j==wordNum){
     			ret.push_back(i);
     		}

     	}

     	return ret;

     }	
};