class Solution{
public:
    vector<string>	fullJustify(vector<string> &words,int L){
         vector<string> ret;
         int len=words[0].size();
         int n=words.size();
         int start=0;

         for(int i=1;i<n;i++){
         	if(len+words[i].size()+1>L){
               string tmp=addSpace(words,start,i,len,L);
               ret.push_back(tmp);
               start=i;
               len=words[i].size();
         	}

         	else{
         		len+=(words[i].size()+1);
         	}
         }

         string tmp=addLast(words,start,n,L,len);
         ret.push_back(tmp);
         return ret;
    }

    string addSpace(vector<string> &words,int start,int end,int len,int L){
    	int exSpace=L-len;
    	int cnt=end-start;
    	string tmp="";

    	if(cnt==1){
    		tmp=words[start];
    		tmp.append(exSpace,' ');
    	}

    	else{

            int avSpace=exSpace/(cnt-1);
    		int reminder=exSpace%(cnt-1);
    		for(int i=start;i<end-1;i++){
    			tmp+=words[i];
    			tmp.append(avSpace+1,' ');
                if(reminder){
                	tmp.append(1,' ');
                	reminder--;
                }

    		}

    		tmp+=words[end-1];
    	}

    	return tmp;
    }

    string addLast(vector<string> &words,int start,int end,int L,int len){
          string tmp="";
          int exSpace=L-len;
          for(int i=start;i<end-1;i++){
          	tmp+=words[i];
          	tmp.append(1,' ');
          }

          tmp+=words[end-1];
          tmp.append(exSpace,' ');
          return tmp;
    }
};