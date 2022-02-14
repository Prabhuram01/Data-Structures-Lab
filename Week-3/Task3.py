# Its the first day for the students at school and the students enter the class and get seated at random places without any height order. So the students who are short and sitting back are not able to see the board since they sit behind taller students.
 
# Understanding this difficulty, the teacher decides to make the students sit in height order.
#  Suppose there are n students in the class. She makes all the students to stand in a line and compares the first student's height with the remaining (n-1) students. If the first student's height is greater than the ith student, then the taller person goes to the ith place and ith student comes to the first place. Again the new first student's height is compared with remaining students and if his height is greater than ith student the first student goes to ith place and ith place student comes to first place and this goes on till the end.
# This process continues for all the students. Finally the students are in height order.
# Write a program to perform selection sort on an array of n elements.
# Input Format:Input consists of n+1 integers. The first integer corresponds to n, the number of elements in the array.The next n integers correspond to the elements in the array.
# Output Format:Refer sample output for formatting specs.

# Program(Python):
#Selection sort
l=list(map(int,input("Enter the number of students and their heights:").split()))
n=l[0]
l.pop(0)
for i in range(n-1):
    for j in range(i,n):
        if l[j]<l[i]:
            l[j],l[i]=l[i],l[j]
print(l)

# Output 1:
# Enter the number of students and their heights:5 1 1 2 3 4
# [1, 1, 2, 3, 4]
# Output 2:
# Enter the number of students and their heights:5 32 22 11 21 32 
# [11, 21, 22, 32, 32]
