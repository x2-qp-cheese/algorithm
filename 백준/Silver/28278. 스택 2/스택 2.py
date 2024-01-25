import sys

stack = []

n = int(sys.stdin.readline())

for _ in range(n):

    usr = sys.stdin.readline().split()

    if usr[0] == '1':
        stack.append(usr[1])

    elif usr[0] == '2':
        if stack:
            print(stack.pop())
        else:
            print(-1)

    elif usr[0] == '3':
        print(len(stack))

    elif usr[0] == '4':
        if stack:
            print(0)
        else:
            print(1)

    elif usr[0] == '5':
        if stack:
            print(stack[-1])
        else:
            print(-1)
