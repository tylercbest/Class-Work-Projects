#SCOPE: Built-in, Global, Enclosed, Local

#global variable
x = "What's up?"
print(x)

#local scope
def my_funct():
    #global before variable name makes it the new global value for the rest of the lifecycle of the program
    global x
    x = "Hello World!"
    print(x)

my_funct()
print(x)

#enclosed (non-local) scope
#nested variable of outer function is dependent on the inner function
def outer_function():
    x = "Hello World!"
    def inner_function():
        print(x)
    inner_function()

outer_function()

#def a function factory to perform multiple functions with similar processes
def power_function_factory(exponent):
    def power(x):
        return x ** exponent
    return power

square = power_function_factory(2)
cube = power_function_factory(3)

print(square(4))
print(cube(3))

