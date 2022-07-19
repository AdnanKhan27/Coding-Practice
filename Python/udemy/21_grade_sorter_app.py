# Lists Challenge 6: Grade Sorter App
# Use append() to add elements to a list
# OR use list.extend() to add multiple elements to a list

print("Welcome to the Grade Sorter App 📑")

grades = []

# Getting user input
first_grade = int(input("What is your first grade (0-100): "))
second_grade = int(input("What is your second grade (0-100): "))
third_grade = int(input("What is your third grade (0-100): "))
fourth_grade = int(input("What is your fourth grade (0-100): "))

grades.append(first_grade)
grades.append(second_grade)
grades.append(third_grade)
grades.append(fourth_grade)

# Printing Grades
print("Your grades are: ",grades)

# Sorting grades in descending order
grades.sort()
grades.reverse()

print("Your grades from highest to lowest are: ",grades)

# Finding the lowest grades
print("The lowest two grades will now be dropped.")
lowest_1 = grades.pop(-1)
lowest_2 = grades.pop(-2)

print("Removed grade: ",lowest_1)
print("Removed grade: ",lowest_2)

print("Your remaining grades are: ",grades)
print("Nice work! Your highest grade is a ",grades[0])