class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //if(nums.size()<=0) return 0;
        int left=0;
        int right=nums.size()-1;
        
        while(left<=right){
            if(left==right){
                return left;
            }
            int mid=(left+right)/2;
            if(nums[mid]<nums[mid+1]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
    }
};