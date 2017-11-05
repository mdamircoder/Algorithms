
def PrefixSum (a): # Prefix Sum Array generator
    PrefSumArray = [ a[0] ]
    n = len(a)
    for i in range(1, n):
        PrefSumArray.append( PrefSumArray[i-1] + a[i] )
    return PrefSumArray

def Calculate_PrefixSum (PrefSumArray, left, right): # Array index wise Sum calculator
    if left==0 :
        return PrefSumArray[right]
    else:
        return PrefSumArray[right] - PrefSumArray[left-1]
    
# =========================================================================================

a = [ 5, 1, 8, 6, 12, 56, 8, 121 ]
PrefSumArray = PrefixSum( a )
print( "Actual Array :", a )
print( "Prefix Sum Array :", PrefSumArray )
print( "Sum of elemets from index 0 to index 5 :", Calculate_PrefixSum (PrefSumArray, 0, 5) )
print( "Sum of elemets from index 3 to index 5 :", Calculate_PrefixSum (PrefSumArray, 3, 5) )

'''================================= E X P L A N A T I O N =================================

'a' is the Array. You can take the array input manually .
  
'PrefSumArray' is the array which stores Prefix Sum of the Array 'a' .
PrefSumArray [i] = a[0] + a[1] + a[2] + ... + a[i]
                 = Sum of Array elements from index 0 to i .
                   
PrefixSum(a) function :- generates and returns the PrefSumArray i.e. Prefix Sum Array
  
Calculate_PrefixSum(PrefSumArray, left, right)function :- calculates sum from index 'left' to 'right' of array 'a'.
  
=============================== S A M P L E     O U T P U T ===============================
Actual Array : [5, 1, 8, 6, 12, 56, 8, 121]
Prefix Sum Array : [5, 6, 14, 20, 32, 88, 96, 217]
Sum of elemets from index 0 to index 5 : 88
Sum of elemets from index 3 to index 5 : 74
========================================================================================'''
