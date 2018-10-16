def divideNegPos():
    a = [2,4,-8,-9,4,6,8,-1,6,-4,-7,-3,0,-7,0]
    low = 0
    high = len(a) - 1
    print(a)
    while low <= high and low < len(a) - 1 and high >= 0:
        if a[high] >= 0 and a[low] < 0:
            high -= 1
            low += 1
        elif a[high] < 0 and a[low] > 0:
            t = a[low]
            a[low] = a[high]
            a[high] = t
            low += 1
            high -= 1
        elif a[high] >= 0 and a[low] > 0:
            high -= 1
        elif a[high] < 0 and a[low] < 0:
            low += 1

    print(a)

if __name__ == '__main__':
    divideNegPos()
