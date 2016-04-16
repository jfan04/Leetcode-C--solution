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
   TreeNode *creatTree(vector<int> &preorder,int preBeg,int preEnd,vector<int> &inorder,int inBeg,int inEnd){
   	      if(preBeg>preEnd) return NULL;

   	      int root=preorder[preBeg];
   	      int index;

   	      for(int i=inBeg;i<=inEnd;i++){
   	      	if(inorder[i]==root){
               index=i;
               break;
   	      	}
   	      }

   	      int len=index-inBeg;

   	      TreeNode *left=creatTree(preorder,preBeg+1,preBeg+len,inorder,inBeg,index-1);
   	      TreeNode *right=creatTree(preorder,preBeg+len+1,preEnd,inorder,index+1,inEnd);

   	      TreeNode *node=new TreeNode(root);
   	      node->left=left;
   	      node->right=right;

   	      return node;
   }
   TreeNode *buildTree(vector<int> &preorder,vector<int> &inorder){
         return creatTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
   }	
};