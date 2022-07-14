# Basic Data Types Challenge 4: Right Triangle Solver App
''' To find square root:
- Use a**(1/2) OR
- Use math library
    - import math
    math.sqrt()
'''
import math

print("""Welcome to the Right Triangle Solver App 📐.
App will find the hypotenuse and area of a triangle,
Using the given two sides of the triangle.""")

# getting user input
side_a = float(input("Enter the first side of the triangle: "))
side_b = float(input("Enter the second side of the triangle: "))

# Calculating the area & hypotenuse
area = (1/2)*side_a*side_b
area = round(area, 3)

hypotenuse = math.sqrt(side_b**2 + side_a**2)
hypotenuse = round(hypotenuse, 3)

#printing the results
print(f"For a triangle with sides {side_a} and {side_b} the hypotenuse is: {hypotenuse}")
print(f"For a triangle with sides {side_a} and {side_b} the hypotenuse is: {area}")