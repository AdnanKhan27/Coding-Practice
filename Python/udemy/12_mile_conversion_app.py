''' string formatting/ pricision handling using fstring
@ https://realpython.com/python-f-strings/
number = 5/3
print(f"{number:.2f}")
OR
Using the round function: round(number, digits)
'''

# Basic Data Types Challenge 2: Miles per hour Conversion App
print('''Hello, Welcome to the Miles Per Hour Conversion App 🛣
''')

# Taking User input
miles_speed = float(input("🍏| Enter the speed in miles per hour: "))

# Converting speed from miles to meters &
# Rounding off the speed upto two decimal palces
meters_speed = round((0.4474*miles_speed), 2)

print(f"🍎| Your speed in meters per second is: {meters_speed}")
