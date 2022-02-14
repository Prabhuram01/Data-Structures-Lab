# In a class room we have discussed the stack operations called push() and pop(). Based on these operations, design and implement C/Python code to evaluate postfix expressions. Hint: Use the following statement in the push function stack[top]=(int)(post[tmp]-48); for ASCII value conversion from string to numbers. For examples please refer http://www.btechsmartclass.com/data_structures/postfix-evaluation.html
# Sample Input-1:
# Postfix Expression 5 3 + 8 2 - *
# Sample Output-1:
# Postfix Expression Evaluation Value is 48
#  Sample Input-2:
# Postfix Expression 2 3 4 + * 6 -
# Sample Output-2:
# Postfix Expression Evaluation Value is 8

# Program(Python):
n=input("Enter any postfix operation:").split()
a=[]
for i in n:
    if i.isdigit():
        a.append(i)
    else:
        x=float(a.pop())
        y=float(a.pop())
        if ord(i)==43:
            a.append(x+y)
        elif ord(i)==45:
            a.append(y-x)
        elif ord(i)==42:
            a.append(x*y)
        elif ord(i)==47:
            a.append(y/x)
        else:
            print("Unknown Operation!")
            exit()
print(f"Value of given postfix expression is {a[0]}")

# or

n=input("Enter any postfix operation:").split()
a=[]
for i in n:
    if i.isdigit():
        a.append(i)
    else:
        x=(a.pop())
        y=(a.pop())
        a.append(str(eval(y+i+x)))
print(a[0])

# Output 1:
# Enter any postfix operation:2 3 4 + * 6 -
# Value of given postfix expression is 8.0
# Output 2:
# Enter any postfix operation:2 3 - 5 6 7 + / *
# Value of given postfix expression is -0.38461538461538464
