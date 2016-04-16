#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        
        int curMin=nums[0];
        int curMax=nums[0];
        int ret=nums[0];
        for(int i=1;i<nums.size();i++){
            int tmp=curMin*nums[i];
            curMin=min(nums[i],min(tmp,curMax*nums[i]));
            curMax=max(nums[i],max(tmp,curMax*nums[i]));
            ret=max(ret,curMax);
        }
        
        return ret;
    }
};

int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(-3);
    nums.push_back(6);

    Solution s1;
    cout<<s1.maxProduct(nums)<<endl;
    system("pause");
    return 0;

}