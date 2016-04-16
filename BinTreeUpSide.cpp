//definition for binary tree
struct TreeNode
{
	TreeNode *left;
	TreeNode *right;
	int val;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution{
public:
	TreeNode *upsideDownBinaryTree(TreeNode *root){

		if(root==NULL) return root;

		stack<TreeNode*> s;
		TreeNode *tmp=root;

		while(cur){
			s.push_back(tmp->left);
			tmp=tmp->left;
		}

		TreeNode *newRoot=s.top();
		TreeNode* cur=newRoot;
		s.pop();

		while(!s.empty()){
			TreeNode* oldparent=s.top();
			s.pop();
			cur->left=oldparent->right;
			cur->right=oldparent;
			cur=oldparent->right;

			cur->left=NULL;
			cur->right=NULL;


		}

		return newRoot;

	}
};
