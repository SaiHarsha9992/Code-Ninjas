from os import *
from sys import *
from collections import *
from math import *


from sys import stdin


def countWords(string) :
	# Your code goes here
	c = string.split()
	return len(c)
    
    
























	



#main
string = stdin.readline().strip();
count = countWords(string)

print(count)
