//Definition for binary tree
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
	/* data */
};

class Solution{
private:
   vector<vector<int>> ret;	
public:
   void dfs(TreeNode *root,int sum,int curSum,vector<int> path){
   	     if(root==NULL) return;
   	     if(root->left==NULL&&root->right==NULL){
   	     	if(curSum+root->val==sum){
   	     		path.push_back(root->val);
   	     		ret.push_back(path);
   	     		return;
   	     	}
   	     }
   	     path.push_back(root->val);
   	     dfs(root->left,sum,curSum+root->val,path);
   	     dfs(root->right,sum,curSum+root->val,path);
   }
   vector<vector<int>> pathSum(TreeNode *root,int sum){
        ret.clear();
        vector<int> path;
        dfs(root,sum,0,path);
        return ret;
   } 	
};