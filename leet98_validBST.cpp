//Definition for binary tree.
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
   vector<int> val;	
public:
   void dfs(TreeNode *root){
   	   if(root==NULL) return;
   	   dfs(root->left);
   	   val.push_back(root->val);
   	   dfs(root->right);
   }

   bool isValidBST(TreeNode *root){
      if(root==NULL||(root->left==NULL&&root->right==NULL)) return true;
      val.clear();
      dfs(root);
      for(int i=1;i<val.size();i++){
      	if(val[i]<=val[i-1]) return false;
      }

      return true;
   }	
};