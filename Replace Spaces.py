from os import *
from sys import *
from collections import *
from math import *

def replaceSpaces(str):
    # Write your code here.
    s = ''
    for i in str:
        if i == ' ':
            s+='@40'
        else:
            s+=i
    return s
    pass
