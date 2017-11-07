#include<iostream>
using namespace std;

// Logic : gcd (a, b) = gcd( b%a, a) when a!=0

int GCD_Euclid_1 ( int min, int max ) // Type 1
{
	if (min==0)
		return max; // positive gcd
		
	return GCD_Euclid_1 ( max%min , min );
}

int GCD_Euclid_2 ( unsigned int a, unsigned int b ) // Type 2
{
	int max = (a>b) ? a : b;
	int min = (a<b) ? a : b ;
	
	return (min==0) ? max : GCD_Euclid_2 ( max%min , min ) ;
}

int GCD_Euclid_3 ( unsigned int min, unsigned int max ) // Type 3
{
	return (min==0) ? max : GCD_Euclid_3 ( max%min , min ) ;
}

int main()
{
	cout << "1. GCD of 12 and 9 is : " << GCD_Euclid_1(1024, 36) << endl ;
	
	cout << "\n2. GCD of 9 and 12 is : " << GCD_Euclid_2(9, 12) << endl ;
	cout << "2. GCD of 12 and 9 is : " << GCD_Euclid_2(12, 9) << endl ;
	
	cout << "\n3. GCD of 9 and 12 is : " << GCD_Euclid_3(9, 12) << endl ;
	cout << "3. GCD of 12 and 9 is : " << GCD_Euclid_3(12, 9) << endl ;
	
	return 0;
}

/*******************************************************************

For further details, visit - 
https://en.wikipedia.org/wiki/Euclidean_algorithm

=================== S A M P L E      O U T P U T ===================
1. GCD of 12 and 9 is : 4

2. GCD of 9 and 12 is : 3
2. GCD of 12 and 9 is : 3

3. GCD of 9 and 12 is : 3
3. GCD of 12 and 9 is : 3
*******************************************************************/
