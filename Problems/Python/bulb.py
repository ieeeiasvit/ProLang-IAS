print("****************************Aditya Prasad 21BIT0428*******************************")
print()


k=input("Is the bulb switch turned on? (y/n) ")

if k=="y" or k=="Y":
    a=input("Is the bulb burnt out or not? (y/n)")
    
    if a=="y" or a=="Y":
        print("Replace the Bulb")
    elif a=="n" or a=="N":
        print("Call electrician")

elif k=="n" or k=="N":
    k="y"
    k=input("Is the bulb on? (y/n)")
    if k=="y" or k=="Y":
        print()
    elif k=="n" or k=="N":
        
        b=input("Is the bulb burnt out or not? (y/n)")
        if b=="y" or b=="Y":
             print("Replace the Bulb")
        elif b=="n" or b=="N":
             print("Call electrician")     

        
        

print()
print("****************************Aditya Prasad 21BIT0428*******************************")    
print("Have a nice day ;)")
