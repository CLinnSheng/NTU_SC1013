def reverseAndOppositeCase(myStr):
    if len(myStr) == 1:
        if myStr.isupper():
            return myStr.lower()
        else:
            return myStr.upper()
        
    else:
        new_str = reverseAndOppositeCase(myStr[1:]) + reverseAndOppositeCase(myStr[0])

    return new_str

myStr = "AbCdE"

str1 = reverseAndOppositeCase(myStr)

print(str1)