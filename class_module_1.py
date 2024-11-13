class Student:
    def __init__(self, first_name, last_name, middle_name=None):
        self.first_name = first_name
        self.last_name = last_name
        self.middle_name = middle_name

    def get_full_name(self):
        if self.middle_name:
            return f"{self.first_name} {self.middle_name} {self.last_name}"
        else:
            return f"{self.first_name} {self.last_name}"

    def student_info(self):
        return f"Name: {self.get_full_name()}"

class Undergrad(Student):
    def __init__(self, first_name, last_name, level, major, concentration, middle_name=None):
        super().__init__(first_name, last_name, middle_name)
        self.level = level
        self.major = major
        self.concentration = concentration

    def create_undergrad_student(self):
        return f"{self.student_info()}, Level: {self.level}, Major: {self.major}, Concentration: {self.concentration}"

class Grad_Student(Student):
    def __init__(self, first_name, last_name, level, major, concentration, thesis_topic, middle_name=None):
        super().__init__(first_name, last_name, middle_name)
        self.level = level
        self.major = major
        self.concentration = concentration
        self.thesis_topic = thesis_topic

    def create_grad_student(self):
        return f"{self.student_info()}, Level: {self.level}, Major: {self.major}, Concentration: {self.concentration}, Thesis Topic: {self.thesis_topic}"

# The code above defines the required classes and their methods as per the specifications.
# Function and method calls are commented out to adhere to the instructions for development in the PCI.
