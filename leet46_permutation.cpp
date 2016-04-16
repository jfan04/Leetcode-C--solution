class Solution{
public:
   void dfs(vector<int> &num,vector<vector<int>> &ret,int index){
         if(index==num.size()){
         	ret.push_back(num);
         }

         for(int i=index;i<num.size();i++){
         	swap(num[index],num[i]);
         	dfs(num,ret,index+1);
         	swap(num[index],num[i]);
         }

   	}
   vector<vector<int>>	permute(vector<int> &num){

   	 vector<vector<int>> ret;
   	 ret.clear();
   	 dfs(num,ret,0);
   	 return ret;

   }
};