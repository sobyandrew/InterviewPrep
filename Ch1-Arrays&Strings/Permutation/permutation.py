#given two strings check if one is a permutation of another

def permutation(s1,s2):
    print(s1)
    sorted1 = ''.join(sorted(s1)) #sort the string being sent in
    print(sorted1)
    sorted2 = ''.join(sorted(s2)) #sort the string being sent in


    if sorted2 == sorted1:
        print("strings are a permutation")
    else:
        print("strings are not a permutation")


permutation("olleh", "ehllo")
