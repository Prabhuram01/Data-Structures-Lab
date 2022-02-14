# Two friends Reema and Rita decide to play cards. But Reema doesn't know to play the cards. So Rita decides to teach her how to play cards. Rita distributes 13 cards to each other which are in unsorted order and teaches her how to make set with the cards without considering the symbols.
# Rita first takes two cards and checks which card has the lesser number and the card with the least number is put first and larger at second. 
# She takes third card and checks it with second card. If the third card number is less than the second card she inserts the third card at the second position and checks newly inserted second card with the first card. If the newly inserted second card number is less than the first card, she inserts the second card at the first place and this goes on till all the cards get sorted.
# Rita finally learns how to order the cards.
# Write a program to perform insertion sort on an array of n elements.
 
# Input Format:
# Input consists of n+1 integers. The first integer corresponds to n, the number of elements in the array. The next n integers correspond to the elements in the array.
#  Output Format:
# Refer sample output for formatting specs
# Program(Python):
#Insertion Sort
a=list(map(int,input("Enter the number of cards and their numbers:").split()))
n=a[0]
a.pop(0)
for step in range(1, len(a)):
        key = a[step]
        j = step - 1
        while j >= 0 and key < a[j]:
            a[j + 1] = a[j]
            j = j - 1
        a[j + 1] = key
print(f"Sorted order - {a}")

# Output 1:
# Enter the number of cards and their numbers:5 1 3 2 5 4
# Sorted order - [1, 2, 3, 4, 5]
# Output 2:
# Enter the number of cards and their numbers:8 21 45 21 12 34 3 4 0
# Sorted order - [0, 3, 4, 12, 21, 21, 34, 45]
