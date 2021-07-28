a, b, c, d, e = [int(input()) for i in range(5)]
bricks = sorted([a, b, c])
holes = sorted([d, e])
print("YES" if bricks[0] <= holes[0] and bricks[1] <= holes[1] else "NO")
