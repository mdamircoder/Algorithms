# Check out the algo here - https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
# ============================================================================

maxPrime = 1000000 # Maximum Value of Prime number checking

primeArray = [1] * ( maxPrime + 1 ) # An array of size (maxPrime+1) , all elements are 1
primeArray[0] = 0 # Nmber 0 is not prime
primeArray[1] = 0 # Nmber 1 is not prime

for i in range(2, int(maxPrime**0.5)+1):
    if primeArray[i]==1:
        for j in range(i*i, maxPrime+1, i):
            primeArray[j] = 0
			
'''			
 Now primeArray[num] indicates whether 'num' is a prime or not ?
 primeArray[num] = 0 indicates 'num' is not Primne.
 primeArray[num] = 1 indicates 'num' is Primne.
 You can also declare them by True and False.
'''
# ============================================================================    
# We need to check number of prime numbers in the range [first, last] , included

first, last = map(int, input().split()) # Range Input
count = sum( primeArray[first : last+1] )
print ( count ) # Output

'''	
# We get the sum of array elements from index 'first' to 'last'
# It will result the count of all prime numbers in that range.
# If you use True and Flase instead of 0 and 1, you should use a loop, to get the count.

========================= S A M P L E      I N P U T =========================
1 11
======================== S A M P L E      O U T P U T ========================
5
============================================================================== 
Prime numbers betwen 1 to 7 are = 2, 3, 5, 7, 11 . Total 5.
'''
