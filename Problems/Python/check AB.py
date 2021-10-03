def check_ab(counter):
    if s[counter] == 'a':
        if counter+1 >= len(s):
            return True
        elif s[counter+1] == 'a':
            flag = check_ab(counter+1)
        elif s[counter+1:counter+3] == 'bb':
            if counter+3 >= len(s):
                return True
            elif s[counter+3] == 'a':
                flag = check_ab(counter+3)
            else:
                return False
        else:
            return False
    else:
        return False
    return flag


s = input()
if 1 <= len(s) <= 1000:
    if check_ab(0):
        print("true")
    else:
        print("false")
else:
    print("false")