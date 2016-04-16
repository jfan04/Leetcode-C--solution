class Solution{
public:
    int maxArea(vector<int> &height){
       int ret=0;
       int area;
       int left=0,right=height.size()-1;

       while(left<right){

       	area=(right-left)*min(height[left],height[right]);
       	ret=max(ret,area);

       	if(height[left]>height[right]){

       		right--;
       	}
       	else{

       		left++;
       	}
       }

       return ret;

    }	
};