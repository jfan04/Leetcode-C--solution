class Solution{
public:
	bool isValid(string s){
		if(s.length()==0) return true;
		if(s.length()%2==1) return false;
		stack<char> st;

		for(int i=0;i<s.length();i++){
			if(s[i]=='('||s[i]=='['||s[i]=='{'){
				st.push(s[i]);
			}

			else{
				if(st.empty()) return false;
				if(s[i]==')'){
					if(st.top()=='('){
						st.pop();
						continue;
					}
					else return false;
				}

				if(s[i]==']'){
					if(st.top()=='['){
						st.pop();
						continue;
					}
					else return false;
				}
				if(s[i]=='}'){
					if(st.top()=='{'){
						st.pop();
						continue;
					}
					else return false;
				}
			}
		}

		if(st.empty()) return true;
		else return false;
	}

};