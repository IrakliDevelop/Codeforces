n, m = map(int, input().split())

array = map(int, input().split())

tmp = 1

ans = 0

for i in array:
    ans += (i-tmp)%n
    tmp = i
    