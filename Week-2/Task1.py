# We have discussed the Binary search algorithm in the class. Implement the same algorithm using any of the languages like C/Python. Write all the possible test cases. Write down your observations.
# Sample input
# Enter number of elements 8
# Enter 8 elements
# 44,16,18,164,47,10,0,-68
# Enter element to search 10
# Sample output
# 10 is present at location 5

# Program(Python):

n=int(input("Enter number of elements:"))
print(f"Enter {n} elements")
l=list(map(int,input("enter elements\n").split(",")))
key=int(input("Enter element to search:"))
low,high,found=0,n-1,0
while(low<=high):
    mid=(low+high)//2
    if(key>l[mid]):
        low=mid+1
    elif(key<l[mid]):
        high=mid-1
    else:
        print(f"{key} is present at location {mid}")
        found=1
        break
if(found==0):
    print(f"{key} is not found") 

# Output 1:
# Enter number of elements:6
# Enter 6 elements
# 12,34,67,89,121,245
# Enter element to search:121
# 121 is present at location 4

# Output 2:
# Enter number of elements:5
# Enter 5 elements
# 12,34,56,78,90
# Enter element to search:45
# 45 is not found
