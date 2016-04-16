class Solution {
public:
    int majorityElement(vector<int>& nums) {
       /* unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/2){
                return nums[i];
            }
        }*/
        
        int ret;
        int cnt=0;
        
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ret=nums[i];
                cnt++;
            }
            else{
                ret==nums[i]?cnt++:cnt--;
                if(cnt>nums.size()/2) return ret;
            }
        }
        
        return ret;
    }
};