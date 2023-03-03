import math

max = 0
n = str(input())
n = n.split()
numbers = [int(i) for i in n]
maxlist = max(numbers)

for i in range(len(numbers)):
    for j in range(len(numbers)):
        
        if max <= gcd and numbers[i] != numbers[j]:
            max = gcd

        if maxlist == max:
            max = maxlist
answer = max
        
