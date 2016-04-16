class Solution{
public:
    string fractionToDecimal(int numerator,int denominator){
        string ret="";
        if(numerator==0) return "0";
        if(denominator==0) return ret;

        long long n=numerator;
        long long d=denominator;
        if((n>0&&d<0)||(n<0&&d>0)) ret+='-';
        if(n<0) n=-n;
        if(d<0) d=-d;
        ret+=to_string(n/d);
        n=n%d;
        if(n==0) return ret;
        ret+='.';
        
        unordered_map<long long,int> mp;
        int pos=ret.size();
        while(n){
            if(mp.find(n)!=mp.end()){
            	ret.insert(ret.begin()+mp[n],'(');
                ret+=')';
                return ret;
            }
            else{
            	mp[n]=pos;
            	ret+=(n*10/d+'0');
            	pos++;
            	n=(n*10)%d;
            }
        }

        return ret;
    }	
};