while True:
    a, b = map(int, input().split())

    if not a and not b:
        break
    else:
        if a > b:
            print("Yes")
        else:
            print("No")
