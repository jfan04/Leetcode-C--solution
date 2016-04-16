class Solution{
public:
    int longestConsecutive(vector<int> &nums){
    	/*  Solution1(O(nlgn))
    	 if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        
        int ret=1;
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]-nums[i-1]==1){
                cnt++;
                if(cnt>ret){
                     ret=cnt;
                }
            }
            
            else {
                cnt=1;
            }
        }
        
        return ret;*/

         if(nums.size()==0) return 0;
         unordered_set<int> existNum;
         unordered_set<int> visitedNum;
         
         for(int i=0;i<nums.size();i++){
             existNum.insert(nums[i]);
         }
         
         int ret=1;
         for(int i=0;i<nums.size();i++){
             if(visitedNum.find(nums[i])!=visitedNum.end()) continue;
             int cnt=1;
             int left=nums[i];
             while(existNum.find(--left)!=existNum.end()){
                 cnt++;
                 visitedNum.insert(left);
             }
             int right=nums[i];
             while(existNum.find(++right)!=existNum.end()){
                 cnt++;
                 visitedNum.insert(right);
             }
             
             if(cnt>ret){
                 ret=cnt;
             }
             
         }
         
         return ret;
    }	
};