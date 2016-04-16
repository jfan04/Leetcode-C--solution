#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Solution{
public:
    int climbStairs(int n){
    	vector<int> f(n);

    	if(n<=2) return n;

    	f[0]=1;
    	f[1]=2;

    	for(int i=2;i<n;i++){
    		f[i]=f[i-1]+f[i-2];
    	}

    	return f[n-1];

    }
};

int main(){
    Solution solution;
    int ret=solution.climbStairs(40);
    cout<<"Result:"<<ret<<endl;
    system("pause");
    return 0;
}   