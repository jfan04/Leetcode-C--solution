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
public:
   int maxDepth(TreeNode *root){
   	   if(root==NULL) return 0;
   	   queue<TreeNode*>q;
   	   root->val=1;
   	   q.push(root);

   	   while(!q.empty()){
   	   	  TreeNode *cur=q.front();
   	   	  q.pop();
   	   	  if(q.empty()&&!cur->left&&!cur->right){
   	   	  	   return cur->val;
   	   	  }
   	   	  if(cur->left){
   	   	  	cur->left->val=cur->val+1;
   	   	  	q.push(cur->left);
   	   	  }
   	   	  if(cur->right){
   	   	  	cur->right->val=cur->val+1;
   	   	  	q.push(cur->right);
   	   	  }
   	   }
   }	
};
/* Solution 2:
class Solution{
public:
   int maxDepth(TreeNode *root){
   	  if(root==NULL) return 0;
   	  return (max(maxDepth(root->left),maxDepth(root->right))+1);
   }	
};*/