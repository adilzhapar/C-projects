# persistent bugger
cnt = 1
def persistence(n, prod=1):
    global cnt
    if n < 10 and prod == 1: return 0
    if n == 0 and prod // 10 > 0:
        cnt += 1
        n = prod
        return persistence(n, 1) 
    if n == 0: return cnt
    return persistence(n//10, prod * (n % 10))

print(persistence(int(input())))