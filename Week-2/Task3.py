#  Given an Array A of N  of integers.You have to find number of subarrays having Primicity less than or equal to K
# Primicity of a sub-array is defined as a number of primes in that subarray.
# Input:
# First line contains N  and K
# Second line contains N  integers.
# Output:
# Print the Number of sub-arrays having Primicity<= K

# Program(Python):

def primicity(a):
    count=0
    NumberOfPrime=0
    for i in a:
        for j in range(2,(i//2)+1):
            if (i % j) == 0:
                break
        else:
            NumberOfPrime+=1
    if(NumberOfPrime<=k):
        count+=1
    return count
n=int(input("Enter number of elements"))
l=list(map(int,input("enter elements:").split("," )))
k=int(input("Enter K:"))
a=[]
for i in range(len(l)+1):
    for j in range(i+1,len(l)+1):
        sub=l[i:j]
        a.append(sub)
sum=0
for i in a:
    sum+=primicity(i)
print(sum)

# Output 1:
# Enter number of elements:4
# enter elements:1,2,3,4
# Enter K:2
# 8

# Output 2:
# Enter number of elements 8
# enter elements:1,2,3,4,5,6,78 ,8
# Enter K:5
# 36
