#Temperature conversion app

print ("Welcome to the temperature conversion app.")
print ("\n Give me the temperature in degree fahrenheit and i'll convert it to degree celcius & degree kelvin.")

#Taking user input
temp_f = float(input ("\nPlease write the temperature in degree Fahrenheit: "))

#Converting into degree celcius & degree kelvin
temp_c = (temp_f - 32)*(5/9)
temp_k = (temp_f - 32)*(5/9)+273.15

#Rounding off upto 4 decimal places
temp_f = round(temp_f,4)
temp_c = round(temp_c,4)
temp_k = round(temp_k,4)

#printing the output
print ("\nDegree fahrenheit:\t" + str(temp_f))
print ("\nDegree celcius:\t\t" + str(temp_c))
print ("\nDegree kelvin:\t\t" + str(temp_k))
