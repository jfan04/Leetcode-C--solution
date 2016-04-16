class Solution{
public:
     vector<int> plusOne(vector<int> &digits){
     	vector<int> ret(digits);
     	int carry=1;

     	reverse(ret.begin(),ret.end());

     	for(int i=0;i<digits.size();i++){
     		ret[i]+=carry;
     		carry=ret[i]/10;
     		ret[i]=ret[i]%10;
     	}

     	if(carry==1){
     		ret.push_back(1);
     	}

     	reverse(ret.begin(),ret.end());

     	return ret;
     }	
};	