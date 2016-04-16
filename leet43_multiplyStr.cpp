class Solution{
public:
      string multiply(string num1,string num2){
      	if(num1=="0"||num2=="0") return "0";
      	reverse(num1.begin(),num1.end());
      	reverse(num2.begin(),num2.end());
      	string ret;
      	int step=0;
      	int position=0;
      	int carry=0;

      	for(int i=0;i<num1.size();i++){
      		position=step;
      		for(int j=0;j<num2.size();j++){
      			int v=(num1[i]-'0')*(num2[j]-'0')+carry;
      			if(position<ret.size()){
      				v+=(ret[position]-'0');
      				ret[position]=v%10+'0';
      			}
      			else{
      				ret.append(1,v%10+'0');
      			}
      			carry=v/10;
      			position++;
      		}

      		if(carry>0){
      			ret.append(1,carry+'0');
      		}
            carry=0;
      		step++;
      	}

      	reverse(ret.begin(),ret.end());
      	return ret;
      }	
};