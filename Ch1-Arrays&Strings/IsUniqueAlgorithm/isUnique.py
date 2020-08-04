def isUnique(str):
    charArray = []
    alphabetSize = 26
    i = 0
    while i < alphabetSize:
        charArray.append(0)
        i = i +1

    for c in str.lower():
        print(c)
        charArray[ord(c) - 97] +=1

        if charArray[ord(c) - 97] > 1:
            return False

    return True

userChoice = True
while userChoice:
    userString = input("enter a string to check if it is unique:")
    if isUnique(userString):
        print("unique string")

    else:
        print("not a unique string")

    userContinue = input("continue? y/n")
    if userContinue == 'n':
        userChoice = False
