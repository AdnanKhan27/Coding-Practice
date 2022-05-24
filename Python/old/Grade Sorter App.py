# Grade Sorter App

print ('Welcome to the Grade Sorter App')

#Creating the List of Grades
#Taking user input
grades = []
print ("\nWrite your grade from 0-100,")
grades.append(input('\nWhat is your first grade:\t'))
grades.append(input('What is your second grade:\t'))
grades.append(input('What is your third grade:\t'))
grades.append(input('What is your fourth grade:\t'))

print ('\nYour grade are:',grades)

#Sorting the grades
grades.sort(reverse=True)
print ("\nYour grades from highest to lowest are:",grades)

#Removing the lowest two grades
print ('The lowest two grades will now be dropped.')
removed_grade_1 = grades.pop()
print ("Removed grade:",removed_grade_1)
removed_grade_2 = grades.pop()
print ("Removed grade:",removed_grade_2)

#Printing the remaining grades
print ("\nYour remaining grades are:",grades)
print ("Nice Work! Your highest grade is",grades[0])
