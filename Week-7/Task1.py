# In a class room we have discussed the stack operations called push() and pop(). Based on these operations design and implement the solution to identify the balanced and unbalanced expressions.
# Sample Input-1
# The expression like [(a+b)(a-b)]
# Sample output-1
# is known to be balanced
# Sample Input-2
# The expression like [(a+b)(a-b] is known to be unbalanced
# Sample output-2
# is known to be unbalanced
# Design algorithm and rules for the same. Use a C/Python program for implementation.

# Program(Python):

d={"(":")","[":"]","{":"}"}
a=[]
c=0
e=input("Enter an Expression: ").split()
for ele in e:
    if ele in d.keys():
        a.append(ele)
    elif ele in d.values():
        if d[a.pop()]==ele:
            pass
        else:
            c=1
            break
print("Balanced") if c==0 else print("Unbalanced")

# Output 1:
# Enter an Expression: [ [ ( { ] } )
# Unbalanced

# Output 2:
# Enter an Expression: [ ( ) { } [ ] ]
# Balanced