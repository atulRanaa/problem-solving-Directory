def RPN(infix):
    stack = []
    postfix = ''
    p = {'^':5,'/':4,'*':3,'-':2,'+':1,'(':0}
    for c in infix:
        if c in "abcdefghijklmnopqrstuvwxyz": postfix += c
        else:
            if c == '(': stack.append(c)
            elif c == ')':
                operator = stack.pop()
                while operator != '(':
                    postfix += operator
                    operator = stack.pop()              
            else:
                while (len(stack) > 0 and p[stack[-1]] > p[c]):
                    postfix += stack.pop()
                stack.append(c)

    while len(stack) > 0:
        postfix += stack.pop()
    return postfix

for _ in range(input()):
    print RPN(raw_input())
