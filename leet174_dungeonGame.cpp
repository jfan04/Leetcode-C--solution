class Solution{
public:
   int calculateMinmumHP(vector<vector<int>> &dungeon){
   	 int m=dungeon.size();
   	 int n=dungeon[0].size();

   	 dungeon[m-1][n-1]=max(0-dungeon[m-1][n-1],0);

   	 for(int i=m-2;i>=0;i--){
   	 	 dungeon[i][n-1]=max(dungeon[i+1][n-1]-dungeon[i][n-1],0);
   	 }

   	 for(int i=n-2;i>=0;i--){
   	 	dungeon[m-1][i]=max(dungeon[m-1][i+1]-dungeon[m-1][i],0);
   	 }

   	 for(int i=m-2;i>=0;i--){
   	 	for(int j=n-2;j>=0;j--){
   	 		dungeon[i][j]=max(min(dungeon[i+1][j],dungeon[i][j+1])-dungeon[i][j],0);
   	 	}
   	 }

   	 return dungeon[0][0]+1;
   }	
};