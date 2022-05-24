#Right triangle solver app
import math
print ("Welcome to the Right Triangle Solver App.")

#Taking user input
side_1 = float(input ("\nWrite the first side of the triangle:\t"))
side_2 = float(input ("Write the second side of the triangle:\t"))

#Calculating the hypotenuse & area of the triangle
side_hypo = math.sqrt(side_1**2 + side_2**2)
area = 0.5*side_1*side_2

#Rounding off values upto 4 decimal precision
side_hypo = round(side_hypo,4)
area = round(area,4)

#printing the output
print ("\nFor the given data, the hypotenuse of the right triangle is:\t",side_hypo)
print ("For the given data, the area of the right triangle is:\t\t",area)
