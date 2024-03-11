import random

numlist = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
WIDTH = 4

def genNumbers(nL, W):
    random.shuffle(numlist)
    t_number = [] ## or t_number = list()

    for i in range(W):
        t_number.append(numlist[i])

    return t_number

def userGuess():
    u_input = input("Please input 4 digits: ")

    while not u_input.isdigit() or len(u_input) != 4:
        u_input = input("Wrong format!! Please input 4 digits: ")
    
    u_guess = []

    for i in range(WIDTH):
        u_guess.append(int(u_input[i]))

    return u_guess

def checkGuess(tN, uN):
    b, c = 0, 0

    for i in range(len(uN)):
        for j in range(len(tN)):
            if uN[i] == tN[j]:
                if i == j:
                    b += 1
                else:
                    c += 1

    return(b, c)

target_number = genNumbers(numlist, WIDTH)
cnt = 0

while True:
    user_number = userGuess()
    points = checkGuess(target_number, user_number)
    cnt += 1

    if points[0] == 4:
        print("You Win!!")
        print("Attemps:", cnt)
        break
    
    else:
        print("{} A (Bulls) {} B (Cows)".format(points[0], points[1]))


