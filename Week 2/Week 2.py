# WEEK 2
#  Data structures Lab Task II/IV B.Tech
# Batch-1: 16-November-2021 @ 9.30 to 12
# Batch-2: 18-November-2021 @ 8.40 to 11.10
# Task-1
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

# Task-2

# Once there lived a king and a queen. They were very rich and led a happy life.
#  The King's brother Humayun was jealous of him and he wanted to become the King. So in order to become the King, Humayun carries the Queen away and keeps her in a jail which are numbered in sorted sequence.
# Humayun informs the King that he took away the Queen and if the King agrees him to become the King, he would leave the Queen. The King has a special power of flying. He flies and reaches the place where Humayun has hidden the Queen and Humayun has given clue to King about the jail number of the Queen. Luckily the King finds the key of the jail where the Queen is locked.But Humayun might have tried to fool the King by saying wrong jail number of Queen. The King already knew how many jails were there. He reaches the centre jail and checks whether the jail number and the key number are equal. He also carries a small machine with him to find the next jail to be visited by him. The machine initially contains the low(low=1) and the high value(high=total number of jails), and calculates the mid value (the jail which is to be visited). If the mid value and key value are equal, the King opens the lock and takes the Queen away with him. If the key number is greater than the mid value, the King increases the mid value by 1 in the machine and assigns it to the low value. If the key number is less than the mid value, the King decreases the mid value by 1 in the machine and assigns it to the high value. The King does this until he finds that the key value and the mid value to be equal.
# Sample Input and Output1:
# Enter the total number of jails in Humayun's Place:
# 5
# Enter the jail number 1
# 6
# Enter the jail number 2
# 89
# Enter the jail number 3
# 91
# Enter the jail number 4
# 105
# Enter the jail number 5
# 200
# Enter the clue given by Humayun:
# 105
# Hurray!The King rescued the Queen

# Sample Input and Output 2:
# Enter the total number of jails in Humayun's Place:
# 6
# Enter the jail number 1
# 56
# Enter the jail number 2
# 68
# Enter the jail number 3
# 156
# Enter the jail number 4
# 196
# Enter the jail number 5
# 204
# Enter the jail number 6
# 895
# Enter the clue given by Humayun:
# 4
# The King has been fooled by Humayun

# Program(Python):

n=int(input("Enter the total number of jails in Humayun's Place:"))
l=[]
for i in range(n):
    i=int(input(f"Enter the jail number {i+1}:"))
    l.append(i)
l.sort()
key=int(input("Enter the clue given by Humayun:"))
low,high,found=0,n-1,0
while(low<=high):
    mid=(low+high)//2
    if(key>l[mid]):
        low=mid+1
    elif(key<l[mid]):
        high=mid-1
    else:
        print("Hurray!The King rescued the Queen")
        found=1
        break
if(found==0):
    print("The King has been fooled by Humayun")
# Output 1:
# Enter the total number of jails in Humayun's Place:5
# Enter the jail number 1:234
# Enter the jail number 2:5634
# Enter the jail number 3:3245
# Enter the jail number 4:56
# Enter the jail number 5:34
# Enter the clue given by Humayun:43
# The King has been fooled by Humayun

# Output 2:
# Enter the total number of jails in Humayun's Place:5
# Enter the jail number 1:123
# Enter the jail number 2:234
# Enter the jail number 3:345
# Enter the jail number 4:456
# Enter the jail number 5:678
# Enter the clue given by Humayun:456
# Hurray!The King rescued the Queen

# Task-3

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
Output 1:
Enter number of elements:4
enter elements:1,2,3,4
Enter K:2
8

Output 2:
Enter number of elements 8
enter elements:1,2,3,4,5,6,78 ,8
Enter K:5
36
