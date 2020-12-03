#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    s=0
    m=0

    for i in range(4):
        for j in range(4):
            s=0
            s += arr[i][j]
            s += arr[i][j+1]
            s += arr[i][j+2]

            s += arr[i+1][j+1]

            s += arr[i+2][j]
            s += arr[i+2][j+1]
            s += arr[i+2][j+2]

            if s>m or (i==0 and j==0):
                m=s
    print(m)

