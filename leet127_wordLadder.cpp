class Solution{
public:
   int ladderLength(string start,string end,unordered_set<string> &dict){
   	    queue<string> q;
   	    q.push(start);
   	    dict.erase(start);

   	    int cnt=1;
   	    int ret=1;

   	    while(!q.empty()){
   	    	string cur=q.front();
   	    	q.pop();
   	    	cnt--;

   	    	for(int i=0;i<cur.size();i++){
   	    		string tmp=cur;
   	    		for(char j='a';j<='z';j++){
   	    			if(tmp[i]==j) continue;
   	    			tmp[i]=j;
   	    			if(tmp==end) return ret+1;
   	    			if(dict.find(tmp)!=dict.end()){
   	    				q.push(tmp);
   	    				dict.erase(tmp);
   	    			}
   	    		}
   	    	}

   	    	if(cnt==0){
   	    		cnt=q.size();
   	    		ret++;
   	    	}
   	    }

   	    return 0;
   }	
};