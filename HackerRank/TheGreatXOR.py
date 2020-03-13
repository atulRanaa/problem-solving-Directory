#!/bin/python

import math
import os
import random
import re
import sys

# Complete the theGreatXor function below.
def theGreatXor(x):
    ans = 0
    binStr = [i for i, ltr in enumerate(bin(x)[::-1]) if ltr == '0']
    for i in binStr: ans += (1 << i)

    return ans - (1 << binStr[-1])
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        x = int(raw_input())

        result = theGreatXor(x)

        fptr.write(str(result) + '\n')

    fptr.close()
