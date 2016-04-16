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
public:
   vector<int> inorderTraversal(TreeNode *root){
      vector<int> ret;
      stack<TreeNode*> stk;

      while(root!=NULL||!stk.empty()){
      	while(root!=NULL){
      		stk.push(root);
      		root=root->left;
      	}
      	if(!stk.empty()){
      	root=stk.top();
      	stk.pop();
      	ret.push_back(root->val);
      	root=root->right;
      }
    }
     return ret;
   }	
};