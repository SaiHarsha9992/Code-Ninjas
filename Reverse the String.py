from os import *
from sys import *
from collections import *
from math import *

import sys

def reverseString(string):
    # Write your code here.
    pass
    return string[::-1]

t = int(sys.stdin.readline().strip())

for i in range(t):
    
    string = str(sys.stdin.readline().strip())
    
    for i in (reverseString(string)):
        print(i, end = '')
        
    print()
        
