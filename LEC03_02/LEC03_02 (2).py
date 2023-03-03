def main():
    max = 1
    n = str(input())
    n = n.split()
    numbers = [int(i) for i in n]
    numbers.sort()
    
    for i in range(len(numbers)):
        for j in range(len(numbers)):
            gcd1 = gcd(numbers[i], numbers[j])
            if max <= gcd1 and numbers[i] != numbers[j]:
                max = gcd1
            if numbers[i-1] == numbers[i]:
                max = numbers[i]

    print(max)

def gcd(a, b):
    if(b == 0):
        return abs(a)
    else:
        return gcd(b, a % b)
    
if __name__ == "__main__":
    main()