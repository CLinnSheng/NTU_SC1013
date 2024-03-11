width = int(input("Please enter pattern width: "))

for i in range(width):
    for j in range(i+1):
        print('#', end = '')
    print()
    
for i in range(width - 1,0,-1):
    for j in range(i,0,-1):
        print('#', end = '')
    print()

print()

    
