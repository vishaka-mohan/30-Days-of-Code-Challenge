#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    b = bin(n).replace("0b","")
    #print(b)
    ans = -1
    c=0
    for i in range(len(b)):

        if(b[i]=='1'):
            c = 1
            for j in range(i+1, len(b)):
                if b[j]=='1':
                    c += 1
                else:
                    break
            if c>ans:
                ans=c
    print(ans)

