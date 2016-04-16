class Solution{
public:
     int longestValidParenthese(string s){
     	int ret=0;
     	if(s.length()<=1) return ret;
     	stack<int> st;
     	bool *a=new bool[s.length()];
     	memset(a,false,s.length());

     	for(int i=0;i<s.length();i++){
     		if(s[i]=='('){
     			st.push(i);
     		}
     		else if(s[i]==')'&&!st.empty()){
     		    a[i]=true;
     		    a[st.top()]=true;
     		    st.pop();
     		}
     	}
     	
     	int curLen=0;
     	for(int i=0;i<s.length();i++){
     	    if(a[i]) curLen++;
     	    else curLen=0;
     	    ret=max(ret,curLen);
     	}
        delete[] a;
     	return ret;


     }	
};