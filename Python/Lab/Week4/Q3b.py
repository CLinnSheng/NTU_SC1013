print("User registration:")
user_name = input("Input your user name: ")
pass_strength = False
n_upper, n_lower, n_digit = 0, 0, 0

while not pass_strength:
    print("Input your password:\n",
          "1.the password has at least one upper case letter\n",
          "2.the password has at least one lower case letter\n",
          "3.the password has at least one digit", sep = '')
    password = input()

    if len(password) > 8:
        for i in password:
            if i.isupper(): 
                n_upper += 1
                continue

            if i.islower():
                n_lower += 1
                continue

            if i.isdigit():
                n_digit += 1

    if n_upper != 0 and n_digit != 0 and n_lower != 0:
        pass_strength = True
    else:
        print("Your password is weak. Please enter a new password")

print("Your password is strong enough. User registered.")    


