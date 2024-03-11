dict_user = {'Test' : 'Test12345',
             'Jack' : 'Test12345',
             'Tom' : 'Password1'}

exist_user = True
pass_strength = False
n_upper, n_lower, n_digit = 0, 0, 0

print("User registration:")

while exist_user:
    user_name = input("Input your user name: ")

    for i in dict_user:
        if user_name == i:
            break
    else:
        exist_user = False

    if exist_user:
        print("The user exists. Please choose another user name.")

while not pass_strength:
    print("Input your password:\n",
          "1.the password has at least one upper case letter\n",
          "2.the password has at least one lower case letter\n",
          "3.the password has at least one digit\n", 
          "4.its length is more than 8", sep = '')
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

dict_user.update({user_name : password})
print("The users in system\n",
      dict_user, sep = '')

