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
   TreeNode *creatTree(vector<int> &inorder,int inBeg,int inEnd,vector<int> &postorder,int poBeg,int poEnd){
   	    if(poBeg>poEnd) return NULL;
   	    int root=postorder[poEnd];
   	    int index;

   	    for(int i=inBeg;i<=inEnd;i++){
   	    	if(inorder[i]==root){
   	    		index=i;
   	    		break;
   	    	}
   	    }

   	    int len=index-inBeg;
   	    TreeNode *left=creatTree(inorder,inBeg,index-1,postorder,poBeg,poBeg+len-1);
   	    TreeNode *right=creatTree(inorder,index+1,inEnd,postorder,poBeg+len,poEnd-1);

   	    TreeNode *node=new TreeNode(root);
   	    node->left=left;
   	    node->right=right;

   	    return node;
   }
   TreeNode *buildTree(vector<int> &inorder,vector<int> &postorder){
       return creatTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
   }
};