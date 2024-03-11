import random
r1 = random.randint(1, 9)
r2 = random.randint(1, 99)

dict_user = {'Test' : 'Test12345',
             'Jack' : 'Test12345',
             'Tom' : 'Password1'}

def getUserChoice():
    print("Please select one of the following options:\n",
          "\t\t1. User Registration\n",
          "\t\t2. User Login\n",
          "\t\t3. Play the game as a guest", sep = '')
    choice = int(input())

    return choice

def getNewUserName():
    exist_user = True

    while exist_user:
        uN = input("Input your user name: ")

        for i in dict_user:
            if uN == i:
                exist_user = True
                break
            else:
                exist_user = False
        
        if exist_user:
            print("The user exist. Plase choose another user name.")
    
    return uN

def getPass():
    print("Input your password:\n",
        "1.the password has at least one upper case letter\n",
        "2.the password has at least one lower case letter\n",
        "3.the password has at least one digit\n", 
        "4.its length is more than 8", sep = '')
    password = input() 

    return password

def getStrongPassword():
    upper, lower, digit = False, False, False

    while not(upper and lower and digit):
        password = getPass()
    
        if len(password) >= 8:
            for i in password:
                if i.isupper():
                    upper = True
                    continue

                elif i.islower():
                    lower = True
                    continue

                elif i.isdigit():
                    digit = True

        if upper == False or lower == False or digit == False:
            print("Your password is weak. Please enter a new password")
            
    return password

def userRegistration(uN, password):
    dict_user.update({uN : password})
    print("New user registered. You can start the game.")

def userLogin():
    user_name = input("Input user name: ")
    exist_user = False

    for i in dict_user:
        if i == user_name:
            exist_user = True
            break
    
    if not exist_user:
            print("User not exisiting")
    
    else:
        password = input("Input password: ")
        user_pass = False

        while not user_pass:
                if dict_user[user_name] == password:
                    print("Welcome back,", user_name, ", You can start the game.")
                    break

                else:
                    password = input("Wrong psasword, input again: ")
def chooseQuiz():
    print("Dear Guest, you have to pass one quiz to play the game.\n",
          "\tPlease select one of the following quizzes:\n",
          "\t\t1. Number guessing\n",
          "\t\t2. Calculate sum", sep = '')
    choice = int(input())

    return choice

def guessingNumber():
    cnt = 0

    while True:
        
        while True:
                try:
                    guess = int(input("Enter an integer from 1 to 9: "))
                    cnt += 1
                    break

                except ValueError:
                    print("wrong input format. Please try again.")
                  
        if guess < r1:
            print("guess is low")
        elif guess > r1:
            print("guess is high")
        else:
            print("Congratulations. You guessed it by", cnt, " trials!")
            return True

        if cnt == 3:
            print("Sorry, you exceed the trial limit. Failed.")
            return False

def calculateSum():
    print("Please calculate the sum of 5 integers from,", r2)
    ans = int(input("Please enter your number: "))

    ttl = 0

    for i in range(5):
        ttl += r2 + i
    
    if ans == ttl:
        return True
    else:
        return False
    
def takeQuiz(c):
    if c == 1:
        isPass = guessingNumber()
    elif c == 2:
        isPass = calculateSum()

    return isPass

def guestQuiz():
    choice = chooseQuiz()
    isPass = takeQuiz(choice)
    if isPass:
        print("\nCongratulations. You can start the game.")

def main():

    choice = getUserChoice()

    if choice == 1:
        userRegistration(getNewUserName(), getStrongPassword())
        exit()
    elif choice == 2:
        userLogin()
        exit()
    elif choice == 3:
        guestQuiz()
        exit()

    return choice

main()
