class Solution{
public:
     int romanToInt(string s){
     	map<char,int> mp;
     	mp['M']=1000;
     	mp['D']=500;
     	mp['C']=100;
     	mp['L']=50;
     	mp['X']=10;
     	mp['V']=5;
     	mp['I']=1;

     	int ret;

     	for(int i=s.length()-1;i>=0;i--){

     		if(i==s.length()-1){
     			ret=mp[s[s.length()-1]];
     		}

     		else{

     			if(mp[s[i]]>=mp[s[i+1]]){

     				ret+=mp[s[i]];
     			}

     			else{

     				ret-=mp[s[i]];
     			}
     		}
     	}

     	return ret;
     }	
};