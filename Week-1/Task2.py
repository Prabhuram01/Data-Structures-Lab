# Suppose you are implementing a Linear search algorithm using any of the languages like C/Python. In the given array if there is a possibility of multiple occurrences of some elements. In such a case how to identify the location of the element. Design and implement the solution for the same.
# Sample input
# Enter number of elements 6
# Enter 6 elements
# 44,16,18,16,47,16
# Enter element to search 16
# Sample output
# 16 is present at location 1
# 16 is present at location 3
# 16 is present at location 5

# Program(Python):

n=int(input("enter the size of array:"))
print("enter the elements:")
a=list(map(int,input().split()))
key=int(input("enter the element to be found:"))
f=0
for i in range(n):
    if a[i]==key:
        print( "{} is at location of {}".format(key,i))
f=1
if f==0:
    print( "element not found")

# Output 1:
# Enter number of elements:5
# Enter 5 elements 1 2 3 4 2 2
# Enter element to search:2
# 2 is present at location 1
# 2 is present at location 4
# Output 2:
# Enter number of elements:6
# Enter 6 elements 1 54 3 32 5 -5
# Enter element to search:4
# Element is not found

