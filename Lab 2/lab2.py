print("-- task 1 --")
number = int(input("enter a number greater than one:"))
steps = 0

while number>1:
    steps+=1
    print(number, end=" -> ")
    if number%2==0:
        number=number//2
    else:
        number=number*3+1

print(1)
print("total steps:", steps)
print(" ")


print("-- task 2 --")
x = int(input("enter a number between 10 and 100:"))
while 10>x or x>100:
    x = int(input("invalid input.  enter a number between 10 and 100:"))
count=0
fizz=0
buzz=0
fizzbuzz=0
while count<x:
    count+=1
    if count%7==0:
        continue
    if count%3==0 and count%5==0:
        print("FizzBuzz")
        fizzbuzz+=1
    elif count%3==0:
        print("Fizz")
        fizz+=1
    elif count%5==0:
        print("Buzz")
        buzz+=1
    else:
        print(count)
    
print("- summary -")
print("Fizz count: ", fizz)
print("Buzz count: ", buzz)
print("FizzBuzz count: ", fizzbuzz)
print(" ")

print("-- task 3 --")
pattern = int(input("Please enter a number between 3 and 9: "))
if 3 <= pattern <= 9:
    for i in range(1, 2 * pattern):
        level = pattern - abs(pattern - i)
        print("*" * level)
