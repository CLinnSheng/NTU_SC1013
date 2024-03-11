def reverseAndRepeat(myStr, num):
    if len(myStr) == 1: 
        return num * myStr

    else:
        new_str = reverseAndRepeat(myStr[1:], num) + (myStr[0] * num)

    return new_str

myStr = "ABC"

str1 = reverseAndRepeat(myStr, 2)
str2 = reverseAndRepeat(myStr, 3)

print(str1)
print(str2)
