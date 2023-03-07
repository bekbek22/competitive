import string
import random
import os,sys
import subprocess
import glob
from os import path

N = int(input())

f = open('output.txt','w')
count = 0

with open('output.txt', 'w') as f:
    for i in range(random.randint(10000, 50000)):
        res = ''.join(random.choices(string.ascii_letters, k=N))
        print(str(res))
        f.write(str(res))
        f.write("\n")
        count = count + 1;
    f.write(str(count))

