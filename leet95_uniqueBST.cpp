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
	vector<TreeNode*> dfs(int start,int end){
		vector<TreeNode*> ret;
		TreeNode *root=NULL;
		if(start>end){
			ret.push_back(root);
		}
        vector<TreeNode*>left,right;
		for(int i=start;i<=end;i++){
			left=dfs(start,i-1);
			right=dfs(i+1,end);
			for(int j=0;j<left.size();j++){
				for(int k=0;k<right.size();k++){
				   root=new TreeNode(i);
				   root->left=left[j];
				   root->right=right[k];
				   ret.push_back(root);
				}
			}
		}
	}
    vector<TreeNode*> generateTrees(int n){
    	//vector<TreeNode*> ret;
    	//ret.clear();
    	return dfs(1,n);
        
    }	
};