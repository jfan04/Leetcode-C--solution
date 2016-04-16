/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class Soluiton{
 public:
 	TreeNode *dfs(ListNode *head,int start,int end){
 		if(start>end) return NULL;
 		int mid=(start+end)/2;
 		ListNode *p=head;
 		for(int i=start;i<mid;i++){
 			p=p->next;
 		}

 		TreeNode *left=dfs(head,start,mid-1);
 		TreeNode *right=dfs(p->next,mid+1,end);

 		TreeNode *root=new TreeNode(p->val);

 		root->left=left;
 		root->right=right;
 		return root;
 	}
    TreeNode *sortedListToBST(ListNode *head){
        int len=0;
        ListNode *q=head;
        while(q){
        	len++;
        	q=q->next;
        }
        return dfs(head,0,len-1);
    }	
 };