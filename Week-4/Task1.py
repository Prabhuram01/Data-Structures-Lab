# We have discussed sorting algorithm in the class. Implement the same algorithm using any of the languages like C/Python. Given a group of unordered elements. Design an algorithm/pseudocode based on divide and conquer to make the elements in to sorted list. Write all your observations. Eloborate the testcases.
# Note: Use the Logic discussed in the class
# Algorithm as below
# MergeSort(arr[], l,  r)
# If r > l
#  	1. Find the middle point to divide the array into two halves: 
#          	middle m = l+ (r-l)/2
# 	 2. Call mergeSort for first half:  
#      	    Call mergeSort(arr, l, m)
#  	3. Call mergeSort for second half:
#          	Call mergeSort(arr, m+1, r)
#  	4. Merge the two halves sorted in step 2 and 3:
#          	Call merge(arr, l, m, r)
# Test case-1
# Enter number of Elements
# 12
# Apply the process of merge sort and sort the following list of elements:

# Mar, May, Nov, Aug, Apr, Jan, Dec, Jul, Feb, Jun, Oct, Sep
# Test case-2
# Enter number of Elements
# 6
# Enter array of elements
# 12,45,10,33,55,50
# Sorted array is
# 10,12,33,45,50,55
# Program(Python):
#Merge Sort
def merge(l,r,a):
    i,j,k=0,0,0
    while(i<len(l) and j<len(r)):
        if(l[i]<=r[j]):
            a[k]=l[i]
            i+=1
        else:
            a[k]=r[j]
            j+=1
        k+=1
    while(i<len(l)):
        a[k]=l[i]
        i+=1
        k+=1
    while(j<len(r)):
        a[k]=r[j]
        j+=1
        k+=1
def mergesort(a):
    if len(a)<2:
        return 0
    mid=len(a)//2
    l=a[:mid]
    r=a[mid:]
    mergesort(l)
    mergesort(r)
    merge(l,r,a)
    return a
n=int(input("Enter number of Elements"))
a= list(map(int,input("Enter the array of elements:").split()))[:n]
mergesort(a)
print(a)
# Output 1:
# Enter number of Elements5
# Enter the array of elements:1 4 3 2 5
# [1, 2, 3, 4, 5]
# Output 2:
# Enter number of Elements8
# Enter the array of elements:1 4 6 8 2 3 5 7
# [1, 2, 3, 4, 5, 6, 7, 8]
