def binarySearch(Alpha,x):

    N=len(Alpha)

while(N!=1):

    N = len(Alpha)
    med_idx = N/2
    if Alpha[med_idx] == x:
        return True
        elif Alpha[med_idx] > x:
            Alpha[medidx+1:]

        else:
            Alpha[med_idx] < x:
            Alpha[:medidx]


    if Alpha [0] == x:
        return True
    else:
        return False

    N = len(Alpha)


    Test Array = [1,6,7,8,9]
    testSearch = 9
