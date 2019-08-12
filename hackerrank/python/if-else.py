#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input().strip())
    even = (n % 2 == 0)
    odd = not even

    if odd:
        print('Weird')
    elif even and 2 <= n <= 5:
        print('Not Weird')
    elif even and 6 <= n <= 20:
        print('Weird')
    elif even and n > 20:
        print('Not Weird')
