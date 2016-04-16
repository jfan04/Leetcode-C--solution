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
   vector<vector<int>> zigzagLevelOrder(TreeNode *root){
   	    vector<vector<int>> ret;
   	    if(root==NULL) return ret;

   	    queue<TreeNode*> q;
   	    q.push(root);
   	    q.push(NULL);
   	    vector<int> tmp;
   	    int flag=0;

   	    while(!q.empty()){
           TreeNode *cur=q.front();
           q.pop();
           if(cur){
           	  tmp.push_back(cur->val);
           	  if(cur->left){
           	  	q.push(cur->left);
           	  }
           	  if(cur->right){
           	  	q.push(cur->right);
           	  }
           }
           else{
           	  if(!tmp.empty()){
                 q.push(NULL);
                 if(flag){
                 	reverse(tmp.begin(),tmp.end());
                 }
                 ret.push_back(tmp);
                 flag=1-flag;
                 tmp.clear();
           	  }

           }
   	    }
   }	
};