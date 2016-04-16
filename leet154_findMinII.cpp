#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        
        while(left<right){
            if(nums[left]==nums[right]){
                left++;
                continue;
            }
            
            if(nums[left]<nums[right]){
                break;
            }
            int mid=(left+right)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                right=mid;
            }
            
        }
        
        return nums[left];
    }
};

int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    Solution s1;
    cout<<s1.findMin(nums)<<endl;
    system("pause");
    return 0;
}