import random
n = random.randint(1, 99)
n1 = random.randint(1,9)

print("Please select one of the following quizzes:")
print("\t1. Number guessing\n\t2. Calculate sum")
choice = int(input())



if choice == 1:
    cnt = 0
    
    while True:
        
        while True:
                try:
                    guess = int(input("Enter an integer from 1 to 9: "))
                    cnt += 1
                    break
                except ValueError:
                    print("wrong input format. Please try again.")
                  
        if guess < n1:
            print("guess is low")
        elif guess > n1:
            print("guess is high")
        else:
            print("you guessed it")
            break

        if cnt == 3:
            print("Sorry, you exceed the trial limit. Failed.")
            break
        
elif choice == 2:
    
    print('Please calculate the sum of 5 integers from', n)
    ans = int(input('Please enter your answer: '))

    ttl = 0
    
    for i in range(5):
        ttl += n+i
        
    if ans == ttl:
        print("You can start the game now.")
    else:
        print('Sorry, wrong answer. Failed')

else:
    print("Wrong option. Bye.")
