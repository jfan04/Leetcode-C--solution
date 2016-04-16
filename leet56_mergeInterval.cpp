//definition of an interval
struct Interval
{
	int start;
	int end;
	Interval():start(0),end(0){};
	Interval(int s, int e):start(s),end(e){}
	/* data */
};
class Solution{
public:
	 static bool compareMerge(const Interval &a,const Interval &b){
	 	if(a.start==b.start) return a.end<b.end;
	 	return a.start<b.start;
	 }
     vector<Interval> merge(vector<Interval> &intervals){
           vector<Interval> ret;
           if(intervals.size()==0) return ret;

           sort(intervals.begin(),intervals.end(),compareMerge);

           int pend=intervals[0].end;
           Interval s(intervals[0].start,pend);

           for(int i=1;i<intervals.size();i++){
           	    if(intervals[i].start>pend){
           	    	s.end=pend;
           	    	ret.push_back(s);
           	    	s.start=intervals[i].start;
           	    	pend=intervals[i].end;

           	    }
           	    else{
           	    	if(intervals[i].end>pend)
           	    	     pend=intervals[i].end;
           	    }
           }
         s.end=pend;
         ret.push_back(s);
         return ret;
     }	
};