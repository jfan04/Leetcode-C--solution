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
   vector<int> postorderTraversal(TreeNode *root){
   	   vector<int> ret;
   	   if(root==NULL) return ret;
   	   stack<TreeNode*> st;
   	   st.push(root);
   	   TreeNode *pre=NULL;

   	   while(!st.empty()){
   	   	  TreeNode *cur=st.top();
          if((cur->left==NULL&&cur->right==NULL)||(pre!=NULL&&(cur->left==pre||cur->right==pre))){
          	 ret.push_back(cur->val);
          	 st.pop();
          	 pre=cur;
          }
          else{
          	 if(cur->right)st.push(cur->right);
          	 if(cur->left)st.push(cur->left);
          }
   	   }
     return ret;

   }	
};