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
   int minDepth(TreeNode *root){
   	if(root==NULL) return 0;
   	if(root->left==NULL) return minDepth(root->right)+1;
   	else if(root->right==NULL) return minDepth(root->left)+1;
   	else return min(minDepth(root->left),minDepth(root->right))+1;
   }	
};

/*Solution 2:
class Solution{
public:
   int minDepth(TreeNode *root){
      if(root==NULL) return 0;
      queue<TreeNode*>q;
      root->val=1;
      q.push(root);

      while(!q.empty()){
      	TreeNode *cur=q.front();
      	q.pop();
      	if(cur->left==NULL&&cur->right==NULL) return cur->val;
      	else{
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
   }	
};*/