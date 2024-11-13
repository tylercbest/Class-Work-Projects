num_student = 10

for student in range(1, num_student + 1):
    print(f"Enter exam score for student {student} 0-100 or type 'q' to exit: ")
    student_done = True
    total_score = 0
    num_score = 0

    while student_done:
        user_input = input(f"Enter Student {student} exam score: ")
        if user_input == 'q':
            student_done = False
        else:
            score = int(user_input)
            if score < 0 or score > 100:
                print("Invalid score. Please enter a score between '0' and '100'") 
            elif score >= 90 and score <= 100:            
                print("Grade: A")
            elif score >= 80 and score <= 89:
                print("Grade: B")
            elif score >= 70 and score <= 79:
                print("Grade: C")
            elif score >= 60 and score <= 69:
                print("Grade: D")
            else:
                print("Grade: F")