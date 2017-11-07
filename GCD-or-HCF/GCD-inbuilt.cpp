#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	int res;
	
	res = __gcd(10, 25);
	cout << "GCD of 10 and 25 is : " << res << endl ;
	
	res = __gcd(15, 25);
	cout << "GCD of 15 and 25 is : " << res << endl ;
	
	res = __gcd(-15, 25);
	cout << "GCD of -15 and 25 is : " << res ;
	
	return 0;
}

/*****************************************************
 Inbuilt GCD function in C++

 __gcd (arg_1, arg_2) returns GCD of arg_1 and arg_2
*  Don't forget two 'underscore' sign before gcd
*  arg_1 and arg_2 must be integer
*  Don't forget '#include <algorithm>'
 
============ S A M P L E      O U T P U T ============
GCD of 10 and 25 is : 5
GCD of 15 and 25 is : 5
GCD of -15 and 25 is : -5
*****************************************************/
