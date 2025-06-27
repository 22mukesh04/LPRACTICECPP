'''
       Problem 1 
Number of digits 
Problem statement 
:: Given the numbe 'n', find out and return the number of digits present in a number.
if  input = 156 , output = 3
Solution ::
def count(n):
    if n == 0:
        return 1
    n = abs(n)  # Handle negative numbers if necessary
    cnt = 0
    while n > 0:
        cnt += 1
        n //= 10
    return cnt



'''
# def count(n):
#     if n == 0 :
#                return 1 
#     n=abs(n)  # Handles negative number
#     cnt=0
#     while n > 0 :
#                 cnt += 1
#                 n //= 10
                
#     return cnt

# print(f"Total Numbers :: {count(173)}")
