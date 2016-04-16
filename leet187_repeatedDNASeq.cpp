class Solution{
public:
	//A=10000001,C=10000011,G=1000111,T=1010100,we differ the four character by the last three bits.
    vetor<string> findRepeatedDnaSequences(string s){
          //Soluiton2；
          /*vector<string> ret;
          if(s.size()<10) return ret;

          unordered_map(string,int) mp;
         // set
          for(int i=0;i<s.size()-10;i++){
          	string sub=s.substr(i,10);
                mp[sub]++;
                if(mp[sub]==2){
                	ret.push_back(sub);
                }
          }
          return ret;*/

          vector<string> ret;
          if(s.length()<10) return ret;
          unordered_map<int,int> mp;

          int mask=0x7ffffff;
          int tmp=0,i=0;

          while(i<9){
            tmp=(tmp<<3)|(s[i++]&7);
          }

          while(i<s.size()){
            tmp=(tmp&mask)<<3|(s[i++]&7);
            if(mp.find(tmp)!=mp.end()){
               if(mp[tmp]==1){
                ret.push_back(s.substr(i-10,10));
                mp[tmp]++;
               }
            }
            else{
              mp[tmp]=1;
            }
          }
          return ret;
    }	
};