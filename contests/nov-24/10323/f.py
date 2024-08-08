def rec(f):
    if f == 1 or f == 0:
        return f
    if f > 6227020800:
        return -1
    return f*rec(f-1)


x = int(input())

while True:
    x = rec(x)
    if x == -1:
        print("Overflow!")
    elif x < 10000:
        print("Underflow!")
    else:
        print(x)

    x = int(input())
    if next(x, None) == "None":
        break
