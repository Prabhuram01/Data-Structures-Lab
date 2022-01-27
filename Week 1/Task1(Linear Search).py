# We have discussed linear search algorithms in the class. Implement the same algorithm using any of the languages like C/Python. Write all the possible test cases. Write down your observations. 
# Sample input
# Enter number of elements 8
# Enter 8 elements
# 44,16,18,164,47,10,0,-68
# Enter element to search 10
# Sample output
# 10 is present at location 5
# Program(Python):
n=int(input("enter the size of array:"))
print("enter the elements:")
a=list(map(int,input().split()))
key=int(input("enter the element to be found:"))
f=0
for i in range(n):
if a[i]==key:
print( "{} is the location of {}".format(i,key))
f=1
break
if f==0:
print( "element not found")

