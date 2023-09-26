## Note : For printing multiple values in one line, put them inside print separated by space.
## You can follow this syntax for printing values of two variables val1 and val2 separaetd by space -
## print(val1, " ", val2)
n = int(input())
e = 0
o = 0
while n!=0:
    r = n%10
    n //= 10
    if r%2 == 0:
        e += r
    elif r%2 != 0:
        o += r
print(e,"",o)
