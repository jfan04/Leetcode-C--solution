class Solution{
public:
    string minWindow(string S,string T){
    	vector<int> cnt(256,0);
    	vector<int> inc(256,0);

    	for(int i=0;i<T.size();i++) cnt[T[i]]++;

    	int start=0;
    	int end=0;
    	int tmp=0;

    	int minl=INT_MAX;
    	int minstart;

    	while(end<=S.size()){
    		if(tmp==T.size()){
               if(end-start<minl){
               	minl=end-start;
               	minstart=start;
               }

               if(inc[S[start]]>cnt[S[start]]){
               	inc[S[start]]--;
               }
               else if(inc[S[start]]&&inc[S[start]]==cnt[S[start]]){
               	tmp--;
               	inc[S[start]]--;
               }
               start++;
               continue;
    		}

    		if(cnt[S[end]]==0){
    			end++;
    			continue;
    		}
    	
            if(inc[S[end]]<cnt[S[end]]){
            	tmp++;
            }
            inc[S[end]]++;
            end++;
            
    	}

    	if(minl==INT_MAX) return "";
    	else return S.substr(minstart,minl);	
    }	
};