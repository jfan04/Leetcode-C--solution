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
   void dfs(int dep,TreeNode *root){
   	  if(root==NULL) return;
   	  if(ret.size()>dep){
   	  	ret[dep].push_back(root->val);
   	  }
   	  else{
   	  	vector<int> a;
   	  	a.push_back(root->val);
   	  	ret.push_back(a);
   	  }
   	  dfs(dep+1,root->left);
   	  dfs(dep+1,root->right);
   }
   vector<vector<int>> levelOrder(TreeNode *root){
       ret.clear();
       dfs(0,root);
       return ret;
   }
};