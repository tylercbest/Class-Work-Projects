# Defining the create_student function

def create_student():
    student_level = input("Enter the student's level (undergrad or grad_student): ").lower()
    
    if student_level == 'undergrad':
        first_name = input("Enter the student's first name: ").lower()
        last_name = input("Enter the student's last name: ").lower()
        middle_name = input("Enter the student's middle name (or press enter if none): ").lower()
        major = input("Enter the student's major: ").lower()
        concentration = input("Enter the student's concentration: ").lower()
        
        return {
            'level': student_level,
            'first_name': first_name,
            'last_name': last_name,
            'middle_name': middle_name if middle_name else None,
            'major': major,
            'concentration': concentration
        }
    
    elif student_level == 'grad_student':
        first_name = input("Enter the student's first name: ").lower()
        last_name = input("Enter the student's last name: ").lower()
        middle_name = input("Enter the student's middle name (or press enter if none): ").lower()
        major = input("Enter the student's major: ").lower()
        concentration = input("Enter the student's concentration: ").lower()
        thesis_topic = input("Enter the student's thesis topic: ").lower()
        
        return {
            'level': student_level,
            'first_name': first_name,
            'last_name': last_name,
            'middle_name': middle_name if middle_name else None,
            'major': major,
            'concentration': concentration,
            'thesis_topic': thesis_topic
        }
    
    else:
        return None

# The function prompts for student details based on whether they are an undergrad or a grad student, and returns the appropriate dictionary.
# Actual function calls and input operations are commented out to comply with the development guidelines for the PCI.
