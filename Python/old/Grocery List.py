#Grocery list App

#Calling datetime function from datetime library
from datetime import datetime

#Setting up time
time = datetime.now()
day = str(time.day)
month = str(time.month)
year = str(time.year)
minutes = str(time.minute)
hours = str(time.hour)
seconds  = str(time.second)

food = ['Meat', 'Cheese']
print ("Hello!\nWelcome to the Grocery Shopping App.")

#Printing current date and time 
print ("Current Date and Time: " + day + "-" + month + "-" + year,end=" ")
print (hours + ":" + minutes + ":" + seconds)

#taking user input to add stuff to the list(3 times)
food.append(input("Type of food to add to the grocery list: ").title())
food.append(input("Type of food to add to the grocery list: ").title())
food.append(input("Type of food to add to the grocery list: ").title())
print (food)
#printing the grocery list
print ("Here is your grocery list:\n",food)
food.sort()
print ("Here is your grocery list sorted:\n",food)

print ("Simulating grocery shopping...\nCurrent grocery list has:",len(food),"items\n",food)

#removing the items that you bought
food.remove(input("What food items did you just buy: ").title())
food.remove(input("What food items did you just buy: ").title())
food.remove(input("What food items did you just buy: ").title())

print ("Current items in the list:",len(food),"items\n",food)
print ("\n Sorry the store is out of",food[-1])
food.pop()

#Updating the list
food.append(input("What would you like instead: ").title())

#Updated list
print(food)


