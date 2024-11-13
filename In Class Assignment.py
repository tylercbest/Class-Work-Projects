str_variable = "Hello world"
int_variable = "42"
 
is_student = input("Enter B for boy or G for girl: ")
active = True
for value in is_student:
    if value == "B":
        print("Boy")
    elif value == "G":
        print("Girl")
    else:
        active = False

    

my_list = [1, 2, 3, 4, 5]
my_tuple = ("Boy", "Girl", "Man", "Woman")
my_dict= {
            'Truck':'Chevrolet',
            'Motorcycle':'Harley',
            'Dog':'Pug'
}

x = input("What is x?: ")
y = input("What is y?: ")
z = int(x) + int(y)
print(f"x + y = {z}")

length = input("What is the length?: ")
width = input("What is the width?: ")
area = int(length) * int(width)
print(f"Area of the rectangle is: {area}")

even_or_odd = int(input("Enter a number and I will tell you if it is even or odd: "))

if even_or_odd % 2 == 0:
    print("Number is even")
else:
    print("Number is odd")

posnegzero = int(input("Please enter any number: "))

if posnegzero > 0:
    print(f"You entered a positive number: {posnegzero}")
elif posnegzero == 0:
    print("You entered: 0")
elif posnegzero < 0:
    print(f"You entered a negative number: {posnegzero}")

students = ("student 1", "student 2", "student 3")

for student in students:
    grades = int(input("Please enter student grade 0-100: "))
    print(grades)
    if grades >= 60:
        print("Student passed")
    elif grades < 60:
        print("Student failed")

def add_numbers():
    a = input("What is a?: ")
    b = input("What is b?: ")
    c = int(a) + int(b)
    print(f"C = {c}")

add_numbers()

def cal_area():
    length = input("What is the length of the rectangle?: ")
    width = input("What is the width of the rectangle?: ")
    area = int(length) * int(width)
    print(f"Area equals = {area}")

cal_area()

def is_even():
    even_or_odd = int(input("Enter an even number: "))
    if even_or_odd % 2 == 0:
        print("True number is even")
    else:
        print("False number is odd")

is_even()
def student_dictionary():
    student_dict = {
                'Billy':'18',
                'Mandy':'20',
                'Grim':'438'
    }
    print(student_dict)

student_dictionary()

def sum_num():
    list_num = [5, 6 , 7, 8]
        
sum_num()
