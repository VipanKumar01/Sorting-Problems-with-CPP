
# Online Python - IDE, Editor, Compiler, Interpreter

def ParenthesisMatching(var1):
    
    # Temp variable That storing Information in list form
    temp = []
    
    # It Store's All the Values that Are Brackets
    AllParenthesis = []
    
    # All Brackets that are Occured in the String
    OccuredParenthesis = ["(",")","[","]","{","}"]
    
    # Opened Brackets
    Opened = ["(","[","{"]
    
    # Main Logic
    for i in var1:
        if i in OccuredParenthesis:
            AllParenthesis.append(i)
            if i in Opened:
                temp.append(i)
            else:
                if (len(temp != 0)):
                    AllParenthesis.pop()
                    AllParenthesis.pop()
                    temp.pop()
                else:
                    break
        else:
            continue
        
    
    
    if (len(AllParenthesis)==0):
        return 1
    else:
        return 0


# User input
var1 = input("Enter Your Input : ")
    
    
if (ParenthesisMatching(var1)):
    print("True")
else:
    print("False")
print(f'Sum of {a} and {b} is {sum(a, b)}')
