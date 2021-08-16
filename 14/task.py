import math


x = [int(i) for i in input().split()]


def ok(x):
    one_team = []
    for i in range(math.ceil(x / 4)):
        x -= 4
        if x > 0:
            one_team.append(4)

        else:
            one_team.append(4 - abs(x))

    return one_team


k = sorted(ok(x[0]) + ok(x[1]))[::-1]
b = len(k) > x[2]
print(sum(k[x[2]:]) if b else 0)