class Solution{
public:
    int evaRPN(vector<string> &tokens){
      	if(tokens.size()==1) return stoi(tokens[0]); 

    	stack<int> ret;
    	int op1,op2;
    	for(int i=0;i<tokens.size();i++){
    		if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
    			op2=ret.top();
    			ret.pop();
    			op1=ret.top();
    			ret.pop();
    			if(tokens[i]=="+") ret.push(op1+op2);
    			if(tokens[i]=="-") ret.push(op1-op2);
    			if(tokens[i]=="*") ret.push(op1*op2);
    			if(tokens[i]=="/") ret.push(op1/op2);
    		}

    		else ret.push(stoi(tokens[i]));
    	}

    	return ret.top();
    }	
};