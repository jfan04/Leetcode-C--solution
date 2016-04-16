/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class BSTIterator{
 public:
 	stack<TreeNode*> stk;
 	 BSTIterator (TreeNode *root){
 	 	while(!stk.empty()){
 	 		stk.pop();
 	 	}

 	 	while(root){
 	 		stk.push(root);
 	 		root=root->left;
 	 	}
 	 }

 	 bool hasNext(){
 	 	return (!stk.empty());
 	 }

 	 int next(){
 	 	TreeNode *tmp=stk.top();
 	 	int ret=tmp->val;
 	 	stk.pop();

 	 	tmp=tmp->right;

 	 	while(tmp){
 	 		stk.push(tmp);
 	 		tmp=tmp->left;
 	 	}
 	 	return ret;
 	 }
 };