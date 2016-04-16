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
   vector<int> preorderTraversal(TreeNode *root){
   	    vector<int> ret;
   	    stack<TreeNode*> st;

   	    if(root){
   	    	st.push(root);
   	    	while(!st.empty()){
   	    		root=st.top();
   	    		st.pop();
   	    		ret.push_back(root->val);
   	    		if(root->right) st.push(root->right);
   	    		if(root->left) st.push(root->left);

   	    	}
   	    }

   	    return ret;
   }	
};