def fine_cost(rD, rM, rY, dD, dM, dY):
    if (rY < dY) or (rY <= dY and rM <= dM and rD <= dD):
        return 0
    elif rY == dY and rM == dM:
        return 15 * (rD - dD)
    elif rY == dY:
        return 500 * (rM - dM)
    else:
        return 10000

rD, rM, rY = [int(x) for x in input().split(' ')]
dD, dM, dY = [int(x) for x in input().split(' ')]
print(fine_cost(rD, rM, rY, dD, dM, dY))
