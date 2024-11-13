
#Complete Steps 1-7 First
#1
'''1. Assign a message to a variable, and then print that message. Comment your
code!
2. Assign a message to a variable, then assign a person's name to a variable called
"name" - Print the message and the person's name! Comment your code!
3. Use a variable to represent a person's name, and then print it in lowercase,
uppercase, and title case. Comment your code!
4. Use a famous movie quote or song line. Assign it to a variable. Assign the
artist who is famous for the quote and assign it to a variable. Print the artist
and the quote. Comment your code!
5. Write some addition, subtraction, multiplication and division problems for the
following numbers: (444+555), (456-897), (234*777), (1232345/345). For each
problem, use a variable for
each number in the problem. For example "333 + 444" would be "x = 333" "y = 444".
Then add the variables together like x + y. However, you must remember that we need
somewhere to store our
solutions, so you might could initialize the variable "z" to 0. Therefore, z = x +
y and so on. Comment your code!
6. Use a variable to represent your favorite number, then create a message that
reveals your favorite number. Comment your code!
7. Code an example of each of the following built-in datatypes in python: int,
float, string. Create a variable for each and then print each one to the console.
'''
#Your code goes here:

#initialize variable and print
message_var = "Aanakin, the dark side will consume you!"
print(message_var)

#initialize variable and name and print
message_var = "Hello there!"
name = "General Kenobi!"
print(f"{message_var}, {name}")

#initialize name and print in lower upper and title case
name = "Luke Skywalker"
print(str.lower(name))
print(str.upper(name))
print(str.title(name))

#initialize variable and author and print
mess_var = "Ahh yes the negotiator, General Kenobi!"
author = "General Greivous -"
print(author, mess_var)

x = 444
y = 555
sub_var1 = 456
sub_var2 = 897
mul_var1 = 234
mul_var2 = 777
div_var1 = 1232345
div_var2 = 345
gen_z = x + y
z_for_zorro = sub_var1 - sub_var2
z_for_zynndetta = mul_var1 * mul_var2
zordon = div_var1 / div_var2
print(gen_z)
print(z_for_zorro)
print(z_for_zynndetta)
print(zordon)

x = 444
y = 555
z = x + y
print(z)



reveal = input("Whats the answer to life the universe and everything else? ")
fav_num = 42

print(f"{fav_num} would be the correct number")

var_1 = float(11)
var_2 = int(11)
var_3 = str("OoooAHHHHAHHAHHAH")
print(var_1, var_2, var_3)

#2
'''
Create a Python program with the following requirements:
Declare three variables: var_1, var_2 and var_3.
Initialize each variable as follows:
var_1 with an integer value;
var_2 with a floating-point number;
var_3 with a string;
Print the type and value of each variable!
'''
#Your code goes here:
var_1 = 12
var_2 = 34.56
var_3 = "7 Eight 9"
print(type(var_1), var_1, type(var_2), var_2, type(var_3), var_3)

#3
'''
Implement dynamic variable changes:
Change the value of var_1 to a boolean;
Change the value of var_2 to a string;
Change the value of var_3 to a list containing at least three elements of different
data types;
Print the type and value of each variable after the changes!
'''
#Your code goes here:
#var_1 shouldve been var_1 = True and print type and variable
var_1 + True
var_2 = "China"
var_3 = ["Bing", 1, 22.2]
print(type(var_1), var_1, type(var_2), var_2, type(var_3), var_3)

#4
'''
Demonstrate implicit vs explicit type conversion:
Perform an operation on var_1 and var_2 (demonstrate implicit conversion)
Perform another operation on var_1 and var_2 (demonstrate explict conversion
otherwise known as type casting!)
Yes! You will need to initialize new variables for each example.
'''
#Your code goes here:
var_1 = 12.34
var_2 = 5
var_3 = var_1 + var_2
print(var_3)


var_1 = "12"
var_2 = 5
var_3 = int(var_1) + var_2
print(var_3)

#5
'''
The input function:
user_input = input("Please enter a name here: ")
Use the input function to take user input for each variable with initially string-
typed values.
Perform explicit type conversion for each variable to dynamically change their
types (integer, float, string).
Print the type and value of each variable after user input.
'''
#Your code goes here:
user_input = input("What's 5+5? :")
user_input = int(user_input)
print(type(user_input), user_input)

user_input = input("What is 1.1 + 1.1?: ")
user_input = float(user_input)
print(type(user_input), user_input)

user_input = input("Please enter a name here: ")
user_input = str(user_input)
print(type(user_input), user_input)

#6
'''
BONUS!
Demonstrate String Manipulation:
Extract a substring from var_3 and store it in a new variable called
my_substring_variable;
Concatenate my_substring_varaibale with the orignal value of var_3
Print the final value of var_3 after the concatenation.
'''
#Your code goes here:
my_substring_var = user_input
my_substring_var = my_substring_var.strip().title()
print(my_substring_var)

string = "Hello I'm Mickey Mouse"
substring = string[0:5]
print(substring)