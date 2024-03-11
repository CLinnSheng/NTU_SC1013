def symmetricString(myStr):
    if len(myStr) == 1: 
        return myStr + myStr

    else:
        new_str = myStr[0] + symmetricString(myStr[1:]) + myStr[0]

    return new_str
    
myStr = "AbCdE"

str1 = symmetricString(myStr)

print(str1)