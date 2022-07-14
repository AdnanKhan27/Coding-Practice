# Basic Data Types Challenge 5: Multiplication/Exponent Table App

print("Welcome to the Multiplication/Exponent Table App 🔣")

# Getting user input
name = input("What is your name: ")
number = float(input("What number would you like to work with: "))

message = name.title() + ", Math is cool!"

# Calculating multiplication table
print(f"\nMultiplication Table for {number}\n")

for i in range(1,10):
    print(f"{float(i)}*{number} = {(i*number):.4f}")

# Calculating exponent table
print(f"\nExponent Table for {number}\n")

for i in range(1,10):
    print(f"{float(i)}**{number} = {(number**i):.4f}")

print("\n",message)
print(message.lower())
print(message.title())
print(message.upper())