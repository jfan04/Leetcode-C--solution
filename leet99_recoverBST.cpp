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
     TreeNode *node1,*node2;
     TreeNode *pre;	
public:
   void inorder(TreeNode *root){
   	    if(root==NULL) return;
        inorder(root->left);
        if(pre!=NULL&&pre->val>root->val){
        	node2=root;
        	if(node1==NULL) node1=pre;
        }
        pre=root;
        inorder(root->right);
   }
   void recoverTree(TreeNode *root){
   	     node1=node2=NULL;
   	     pre=NULL;
   	     inorder(root);
   	     swap(node1->val,node2->val);
   }	
};