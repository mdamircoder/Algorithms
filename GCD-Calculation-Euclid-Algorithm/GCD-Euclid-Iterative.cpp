#include<iostream>
using namespace std;

// Logic : gcd (a, b) = gcd( b%a, a) when a!=0

int GCD_Euclid_Iterative ( int arg_1, int arg_2 )
{
	int rem;
	
	int min = ( arg_1<arg_2 ) ? arg_1 : arg_2;
	int max = ( arg_1>arg_2 ) ? arg_1 : arg_2;
	
	if (min==max)
		return min;
	
	while ( min != 0 )
	{
		rem = max % min ;
		max = min ;
		min = rem;
	}
	
	return (max>=0) ? max : -max ; // To get positive gcd
	// return max ;
}

int main()
{
	// GCD_Euclid_Iterative(argument_1, argument_2) ; Two Integers
	
	cout << "GCD of 12 and 9 is : " << GCD_Euclid_Iterative(12, 9) << endl ;
	cout << "GCD of 9 and 12 is : " << GCD_Euclid_Iterative(9, 12) << endl ;
	cout << "GCD of 12 and 0 is : " << GCD_Euclid_Iterative(12, 0) << endl ;
	cout << "GCD of 0 and 124 is : " << GCD_Euclid_Iterative(0, 124) << endl ;
	cout << "GCD of 12 and -9 is : " << GCD_Euclid_Iterative(12, -9) << endl ;
	cout << "GCD of -12 and 9 is : " << GCD_Euclid_Iterative(-12, 9) << endl ;
	cout << "GCD of -18 and -4 is : " << GCD_Euclid_Iterative(-18, -4) << endl ;
	cout << "GCD of 72 and 11 is : " << GCD_Euclid_Iterative(72, 11) ;
	return 0;
}

/*******************************************************************

The main logic of Euclid's Algorithm is:-

If G is the gcd of a and b, then G is also gcd of (b-a) and a [When b>a]
i.e. gcd (a, b) = gcd (b-a, a) [When b>a]

By repeatedly performing this, gcd(a, b) = gcd( b%a, a)
and of course,  gcd ( a, b ) = gcd ( b, a ) and gcd ( 0, x ) = x

For further details- https://en.wikipedia.org/wiki/Euclidean_algorithm

=================== S A M P L E      O U T P U T ===================
GCD of 12 and 9 is : 3
GCD of 9 and 12 is : 3
GCD of 12 and 0 is : 12
GCD of 0 and 124 is : 124
GCD of 12 and -9 is : 3
GCD of -12 and 9 is : 3
GCD of -18 and -4 is : 2
GCD of 72 and 11 is : 1
*******************************************************************/
