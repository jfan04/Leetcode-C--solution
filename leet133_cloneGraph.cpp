//Definition for undirected graph.
struct UndirectedGraphNode
{
	int label;
	vector<UndirectedGraphNode*> neighbors;
	UndirectedGraphNode(int X):label(x){} 
	/* data */
};

class Solution{
public:
 UndirectedGraphNode *dfs(UndirectedGraphNode *node,map<int,UndirectedGraphNode*> &mp){
   	      if(node==NULL) return NULL;
   	      if(mp.count(node->label)>0){
   	      	return mp[node->label];
   	      }

   	      UndirectedGraphNode *newNode=new UndirectedGraphNode(node->label);
   	      mp[newNode->label]=newNode;

   	      for(int i=0;i<node->neighbors.size();i++){
   	      	 UndirectedGraphNode *neighbor=dfs(node->neighbors[i],mp);
   	      	 newNode->neighbors.push_back(neighbor);
   	      }

   	      return newNode;
   }
   UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node){

   	   map<int,UndirectedGraphNode*> table;
   	   return dfs(node,table);
   	
   }	
};