
def Contiguous_Subarray_Max_Sum(a):
    size = len(a)
    max_overall = min(a) - 1 # Initialize by the lowest possible negative number
    max_upto_this = 0
    for i in range(size):
        max_upto_this += a[i]
        if max_overall < max_upto_this :
            max_overall = max_upto_this
        if max_upto_this < 0 : # no need to consider negative contiguous subarrays
            max_upto_this = 0
    return max_overall

a = [ -1, -3, 8, -1, -4, 4, 5, -2 ]
print("Largest Contiguous Sum :", Contiguous_Subarray_Max_Sum(a))


'''=============================== E X P L A N A T I O N ==============================
Kadane's Algorithm helps to find out the maximum possible sum of contiguous subarray.
Here we find out all possible positive contiguous subarrays. Then compare their sum.
'max_upto_this' variable calculates sum of all positive contiguous subarrays.
The maximum sum among those positive contiguous subarrays, is stored in 'max_overall'.
When we get a negative contiguous subarray, we make max_upto_this = 0

Here,  a = [ -1, -3, 8, -1, -4, 4, 5, -2 ]
We will get the largest sum for contiguous subarray a[2:5+1]
i.e. Largest sum = sum of subarray[from index 2 to index 5]
                 = 8 + (-1) + (-4) + 4 + 5
                 = 12
============================= S A M P L E     O U T P U T =============================
Largest Contiguous Sum : 12
===================================================================================='''
