ary = [1, 2, 3,  4, 3, 4, 1]
max =  0
index = 0

for i in range(len(ary)):
    if max < ary[i]:
        max = ary[i]
        index = i
    
print(max)
print(index)