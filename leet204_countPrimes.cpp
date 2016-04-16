//Sieve of Eratosthenes
class Solution {
public:
    int countPrimes(int n){
       int ret=0;
       vector<int>a(n);
       for(int i=2;i<n;i++){
           a[i]=1;
       }
       
       for(int i=2;i<n;i++){
           if(a[i]){
               for(int j=i+i;j<n;j+=i){
                   a[j]=0;
               }
           }
       }
       
       for(int i=2;i<n;i++){
           if(a[i]){
               ret++;
           }
       }
       return ret;
    }
};