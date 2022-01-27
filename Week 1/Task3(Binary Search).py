# Rithick gets a lottery ticket and checks each number in the list to see whether he has won the lottery or not. Since there are many numbers,he finds it tedious to check each ticket number manually. So he decides to write a code to check whether he has won the lottery or not. Help Rithick write a code to find his lottery ticket number from the given ticket numbers.
# Input Format:
# First line of the input consists of n, that corresponds to the total number of lottery tickets.
# Next n lines consist of Integers, that corresponds to the given lottery ticket numbers.
# Last line consists of an Integer 'l', which corresponds to Rithick's lottery ticket number.
# Output Format:
# Output consists of the string "Congratulations! You have won the lottery" or "Sorry your ticket number is not there. Better luck next time", according to the search result.
# Sample Input and Output:
# [All text in bold corresponds to input and the rest corresponds to output]
# Enter the total number of tickets:
# 5
# Enter the ticket number 1:
# 4521
# Enter the ticket number 2:
# 3589
# Enter the ticket number 3:
# 147852
# Enter the ticket number 4:
# 2365
# Enter the ticket number 5:
# 8965
# The ticket numbers are:
# 4521 3589 147852 2365 8965
# Enter the ticket number to be searched:
# 8965
# The ticket number 8965 is found at position 5
# Congratulations!You have won the lottery


# Program(Python):

n=int(input("enter the number of tickets:"))
print("entre the tickets numbers:")
a=list(map(int,input().split()))
i=int(input("enter the ticket number to be found:"))
f=0
for j in range(n):
if a[j]==i:
print( "Congratulations! You have won the
lottery")
f=1
if f==0:
print( "Sorry your ticket number is not there. Better
luck next time")
