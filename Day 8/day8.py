# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
d= {}

for i in range(n):
    x = input().split()

    d[x[0]] = x[1]

try:

    while(True):
        q = input()
        if q == "":
            break

        if q in d.keys():
            print(q+"="+d[q])
        else:
            print("Not found")

except EOFError:
    pass
