import functions

def takeQuiz(c):
    if c == 1:
        isPass = guessingNumber()
    elif c == 2:
        isPass = calculateSum()

    return isPass

def guestQuiz():
    choice = functions.chooseQuiz()
    isPass = takeQuiz(choice)
    if isPass:
        print("\nCongratulations. You can start the game.")

def main():

    choice = functions.getUserChoice()

    if choice == 1:
        functions.userRegistration(functions.getNewUserName(), functions.getStrongPassword())
        exit()
    elif choice == 2:
        functions.userLogin()
        exit()
    elif choice == 3:
        functions.guestQuiz()
        exit()

    return choice

main()
