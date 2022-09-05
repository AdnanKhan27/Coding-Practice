# Lists Challenge 8: Grocery List App

import datetime

# creted object and variables for time and date
current_date_object = datetime.datetime.now()

month = str(current_date_object.month)
day = str(current_date_object.day)
hours = str(current_date_object.hour)
minutes = str(current_date_object.minute)

print("Welcome to the Grocery List App.")
print(f"🕐Current date and time is: {month}/{day} {hours}:{minutes}")
print("You currently have Meat and Cheese in your list.")

foods = ["Meat","Cheese"]

# Adding items to the list
foods.append(input("Type of food to add to the grocery list: ").title())
foods.append(input("Type of food to add to the grocery list: ").title())
foods.append(input("Type of food to add to the grocery list: ").title())

print("Here is your grocery list:\n",foods)

# Sorting the grocery list
foods.sort()
print("Here is your grocery list sorted:\n",foods)

