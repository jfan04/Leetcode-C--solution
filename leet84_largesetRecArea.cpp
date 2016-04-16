class Solution{
public:
   int largestRectangkeArea(vector<int> &height){
   	  if(height.size()==0) return 0;
      
      stack<int> st;
   	  int maxArea=0;
   	  int i=0;

   	  while(i<height.size()){
   	  	if(st.empty()||st.top()<=height[i]){
   	  		st.push(height[i]);
   	  		i++;
   	  	}
   	  	else{
   	  		int cnt=0;
            while(!st.empty()&&st.top()>height[i]){
            	cnt++;
            	int top=st.top();
            	st.pop();
            	maxArea=max(maxArea,top*cnt);
            }

            for(int j=0;j<cnt+1;j++){
            	st.push(height[i]);
            }
            i++;
   	  	}
   	  }
   	  int cnt=0;
   	  while(!st.empty()){
          cnt++;
          int top=st.top();
          st.pop();
          maxArea=max(maxArea,top*cnt);
   	  }

   	  return maxArea;
   }	
};