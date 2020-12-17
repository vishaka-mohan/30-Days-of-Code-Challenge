# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
t = int(input())

while t>0:

    n = int(input())
    c = 0
    for i in range(2, math.floor(math.sqrt(n))+1):
        if n%i==0:
            c += 1
    if n==1:
        print("Not prime")
        t -= 1
        continue
    if c==0:
        print("Prime")
    else:
        print("Not prime")
    t -= 1


