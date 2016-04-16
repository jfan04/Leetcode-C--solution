#include <iostream>
#include <cstdlib>
#include <set>
using namespace std;

class Solution{
public:
    bool isHappy(int n){
      set<int> visitedNum;
        while(n!=1){
            visitedNum.insert(n);
            int sum=0;
            while(n){
                int tmp=n%10;
                n/=10;
                sum+=tmp*tmp;
            }
            n=sum;
            if(visitedNum.find(n)!=visitedNum.end()){
                return false;
            }
        }
        return true;
    }	
};

int main(){
    int n=19;
    Solution s1;
    cout<<s1.isHappy(n)<<endl;
    system("pause");
    return 0;
}