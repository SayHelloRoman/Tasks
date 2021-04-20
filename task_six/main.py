with open("input.txt") as f:
    x = int(f.read())
    for i in range(int(1e9)):
        p = 1
        for j in str(i):
            p *= int(j)

        if p == x:
            with open("output.txt", "w") as f:
                f.write(str(p))
                break