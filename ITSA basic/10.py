a ,b = map(int,input().split())

while b:
    r = b
    b = a % b
    a = r

print(r)