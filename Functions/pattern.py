#  ******* PROBLEM 1 *******

# Pattern problems start
#     SQUARE PATTERN
    
#             For n=3
#     1 2 3
#     1 2 3 
#     1 2 3
#             For n=4
#     1 2 3 4
#     1 2 3 4
#     1 2 3 4
#     1 2 3 4
#     Outer loop will be printed n times 
#     Inner loop will tell what will be single row look like

"""
n=int(input("Enter a number: "))
print(n)

for i in range(n):
    for j in range(1,n+1):
        print(j,end=" ")
    print()

"""

#  ******** SECOND PROBLEM **********
#  To print n*n star pattern
#  if user enter n = 4
#  * * * *
#  * * * *
#  * * * *
#  * * * *


"""

ns=int(input("Enter a number : "))
print("Entered number is : ",ns)

for i in range(ns):
    for j in range(ns):
        print("*",end=" ")
    print()

"""
nl=int(input("Enter the value of n: "))
print("Entered value is :",nl)

for i in range(nl):
    chr ch: "A"
    for j in range(nl):
        print(ch,end=" ")
        ch=ch+1
    print()
    