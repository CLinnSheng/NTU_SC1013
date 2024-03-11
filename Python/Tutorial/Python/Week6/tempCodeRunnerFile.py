def symmetricString(myStr):
    if len(myStr) == 1: 
        return myStr

    else:
        str = ""
        i = len(myStr) - 1

        while i >= 0:
            str += symmetricString(myStr[i])
            i -= 1
            
        return myStr + str
    
myStr = "AbCdE"

str1 = symmetricString(myStr)

print(str1)