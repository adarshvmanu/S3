num = int(input(" Enter N : "))
 
number = 1
print("Odd Numbers : ")
while number <= num:
    if(number % 2 != 0):
        print("{0}".format(number))
    number = number + 1
 
number = 1
print("Even Numbers : ")
while number <= num:
    if(number % 2 == 0):
        print("{0}".format(number))
    number = number + 1