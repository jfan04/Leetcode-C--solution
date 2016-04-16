class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int ret=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            ret=max(ret,nums[i+1]-nums[i]);
        }
        
        return ret;
    }
};