width = int(input("Please enter the width: "))
count = 1

for i in range(2*width):

    if count <= width:
        print('*' * count)
        count += 1
        j = i
    else:
        print('*' * j)
        j -= 1