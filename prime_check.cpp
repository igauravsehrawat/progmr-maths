//prime_check.cpp

#include <iostream>
#include  <cmath>
#include <string>
using namespace std;


string check_prime(int n){
double sqroot=sqrt(n);
int loop_i=2;
	while(loop_i<sqroot){ //optimized for checking..looks out for the sqroot of the nth 
		if(n%loop_i==0)
			return "not a";
		loop_i++;
	}
	return "a";
}
int main(){
int n;
cin >> n;

cout << "The give number is " << check_prime(n) << " prime" << endl;


return 0;

}

/*Note: //this is optimized version for the prime number checking .
//here the range is limited to sqroot the the nth number .since after that..
//repetitionof co factor pairs start to show up. 
/eg. for 50 (2,25),(4,12),(5,10),(6,8.something),(7,7.something),(8,6.something),see repetition*/