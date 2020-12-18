# Enter your code here. Read input from STDIN. Print output to STDOUT

d1,m1,y1 = list(map(int, input().split()))
#print(d,m,y)
d2,m2,y2 = list(map(int, input().split()))

fine = 0

if m1==m2 and y1==y2:

    if d1 <= d2:
        fine = 0
    else:
        fine = (d1-d2)*15

elif y1==y2 and m1!=m2:

    if m1<m2:
        fine = 0
    else:
        fine = (m1-m2)*500
elif y1!=y2:

    if y1<y2:
        fine = 0
    else:
        fine = 10000
print(fine)



