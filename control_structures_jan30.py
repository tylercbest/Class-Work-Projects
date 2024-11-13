'''customer_age = int(input("Enter customer's age: "))

if customer_age >= 21:
    print(f"{customer_age} is old enough!")
else:
    print(f"{customer_age} is too young!")

if customer_age <= 4:
    print(f"{customer_age} $0.00")
elif customer_age <= 18:
    print(f"{customer_age} $15.00")
else:
    print(f"{customer_age} $20.00")'''

'''requested_flavors = ["'grape', 'cherry', 'peach'"]

if 'grape' in requested_flavors:
    print(f"Add grape to drink!")

if 'cherry' in requested_flavors:
    print("Add cherry to drink!")

if 'peach' in requested_flavors:
    print("Add peach to drink!")'''

'''my_nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]

for num in my_nums:
    print(num)

for num in range(1, 5 + 1):
    print(num)'''

'''my_num = [1, 2, 3, 4, 5, 6, 7, 8, 9]

for number in my_num:
    if number == 5:
        continue
    print(number)
else:
    print("Thats all for now")'''

'''colors = ['red', 'yellow', 'green']
cars = ['ford', 'kia', 'chevy']

for color in colors:
    for car in cars:
        print(color, car)'''

'''count = 1
while count <= 100:
    print(count)
    count += 1'''

'''prompt = "\nPlease enter your name: "
prompt += "\nEnter exit to quit!"'''
'''message = " "
while message != "exit":
    message = input(prompt)
    print(f"Hi {message} welcome to JSU")'''

'''active = True
while active:
    message = input(prompt)
    if message == "exit":
        active = False
    else:
        print(message)'''
'''while True:
    name = input(prompt)
    if name.lower() == 'quit':
        break
    else:
        print(f"Hello {name} welcome to JSU")'''

count = 1

while count < 1000:
    count += 1
    if count % 2 == 0:
        continue
    print(count)
