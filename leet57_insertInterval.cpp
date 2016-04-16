//definition of a interval
struct Interval
{
	int start;
	int end;
	Interval():start(0),end(0){}
    Interval(int s,int e):start(s),end(e){}
	/* data */
};

class Solution{
	vector<Interval> insert(vector<Interval> &intervas,Interval newInterval){
		vector<Interval> ret;
        
        for(int i=0;i<intervals.size();i++){
        	if(newInterval.start>intervals[i].end){
        		ret.push_back(intervals[i]);
        	}

        	else if(intervals[i].start>newInterval.end){
                 ret.push_back(newInterval);
                 ret.insert(ret.end(),intervals.begin()+i,intervals.end());
                 return ret;
 
        	}

        	else{

        		newInterval.start=min(newInterval.start,intervals[i].start);
        		newInterval.end=max(newInterval.end,intervals[i].end);

        	}
        }

        ret.push_back(newInterval);
        return ret;
   }

};


