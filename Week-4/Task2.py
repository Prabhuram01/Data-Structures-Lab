# We have discussed sorting a algorithm in the class. Implement the same algorithm using any of the languages like C/Python. Follow the following LOC.
# Sample Input and Output
# Enter number of Elements
# 6
# Enter array of elements
# 12,45,10,33,55,50
# Sorted array is
# 10,12,33,45,50,55

# Program(Python):
def partition(a,l,r):
    pivot=a[r]
    i=l-1
    for j in range(l,r+1):
        if(a[j]<pivot):
            i+=1
            a[i],a[j]=a[j],a[i]
    a[i+1],a[j]=a[j],a[i+1]
    return i+1

def quicksort(a,l,r):
    if(l<r):
        pi=partition(a,l,r)
        quicksort(a,l,pi-1)
        quicksort(a,pi+1,r)
    return a

n=int(input("Enter number of Elements "))
a= list(map(int,input("Enter the array of elements:").split()))[:n]
print(quicksort(a,0,len(a)-1))

# Output 1:
# Enter number of Elements 8
# Enter the array of elements:1 4 2 6 3 8 11 7
# [1, 2, 3, 4, 6, 7, 8, 11]
# Output 2:
# Enter number of Elements 5
# Enter the array of elements:1 3 2 1 1
# [1, 1, 1, 2, 3]
