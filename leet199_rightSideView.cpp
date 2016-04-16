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
     vector<int> rightSideView(TreeNode *root){
     	vector<int> ret;
     	if(root==NULL) return ret;
     	queue<TreeNode*>q;
     	q.push(root);
        TreeNode *cur;
     	while(!q.empty()){
     		int len=q.size();
     		for(int i=0;i<len;i++){
                cur=q.front();
     		    q.pop();
     		    if(cur->left){
     		    	q.push(cur->left);
     		    }
     		    if(cur->right){
     		    	q.push(cur->right);
     		    }
     		}
     		ret.push_back(cur->val);
     	}
     	return ret;
     }
};