import math

max = 0
n = str(input())
n = n.split()
numbers = [int(i) for i in n]

for i in range(len(numbers)):
    for j in range(len(numbers)):
        gcd = math.gcd(numbers[i], numbers[j])
        if max <= gcd and numbers[i] != numbers[j]:
            max = gcd

print(max)
        
