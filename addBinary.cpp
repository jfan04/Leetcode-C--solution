class Solution {
public:
	double pow(double x, int n) {

		if (n == 0){
			return 1;
		}

		double temp = pow(x, abs(n) / 2);

		if (n>0){

			if (n % 2 == 0){

				return temp*temp;
			}
			else{

				return temp*temp*x;
			}
		}

		else{

			if (n % 2 == 0){

				return 1.0 / (temp*temp);
			}

			else{

				return 1.0 / (temp*temp*x);
			}
		}


	}
};