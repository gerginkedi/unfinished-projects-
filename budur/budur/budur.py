from tkinter.tix import InputOnly


def theFunction(**name):
    print("kids surname is " + name["lName"])






theFunction(fName = "elGato", lName = "kedi")


def the_function(num1, num2):
    """
    the function
    """
    num1 = int(num1)
    num2 = int(num2)
    output = num1+num2

    return output

index = 1
while index == 1:
    num1 = input()
    num2 = input()
    try:
        num1 = int(num1)
        num2 = int(num2)
        index = 0
        pass
    except :
        print("please enter only integer")
        pass
    pass

print(the_function(num1, num2))






