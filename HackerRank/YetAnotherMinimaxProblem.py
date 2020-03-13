#!/bin/python

import math
import os
import random
import re
import sys

# Complete the anotherMinimaxProblem function below.
def anotherMinimaxProblem(a):
    bitMap = [bin(ele)[2::].zfill(32) for ele in a]
    bitMap.sort()
    a.sort()
    
    l = len(a)

    pivot = -1
    for i in range(32):
        for j in range(1, l):
            if( bitMap[j-1][i] != bitMap[j][i] ):
                pivot = j
                break
        if(pivot != -1):
            break
    
    if(pivot == -1):
        # all elements are same
        return 0
    ans = 2**32
    for i in range(pivot):
        for j in range(pivot, l):
            ans = min(ans, (a[i] ^ a[j]))
    return ans
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    a = map(int, raw_input().rstrip().split())

    result = anotherMinimaxProblem(a)

    fptr.write(str(result) + '\n')

    fptr.close()
