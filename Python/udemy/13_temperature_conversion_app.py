# Basic Data Types Challenge 3: Temperature conversion app

print("Welcome to the Temperature in degree Farenheit Conversion App 🌡")

# Getting user input
f_temp = float(input("\nEnter the temperature in degree Farenheit to convert: "))

# Converting temperature to Celsius
# C = (F-32)*(5/9)
c_temp = (f_temp - 32)*(5/9)

# Converting temperature to Kelvin
# K = (F-32)*(5/9) + 273.15
k_temp = c_temp + 273.15

print(f'''
🔹 Temperature in Farenheit:   {f_temp:.4f}
🔹 Temperature in Celsius:     {c_temp:.4f}
🔹 Temperature in Kelvin:      {k_temp:.4f}
''')