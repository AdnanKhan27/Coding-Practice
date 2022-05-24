#Multiplication/Exponent Table App

print ("Welcome to the multiplication/exponent table app.")

#Taking user input
name = input ("\nWhat is your name: ").title().strip()
print ("Hello", name + ".")

number = float(input ("\nGive me a number to calculate: "))
message = name + ", Math  is cool!"

#Multiplication Table
print ("\nMultiplication Table for",number,".")

print ("\n1.0 *",number,"=",round(1.0*number,4))
print ("\n2.0 *",number,"=",round(2.0*number,4))
print ("\n3.0 *",number,"=",round(3.0*number,4))
print ("\n4.0 *",number,"=",round(4.0*number,4))
print ("\n5.0 *",number,"=",round(5.0*number,4))
print ("\n6.0 *",number,"=",round(6.0*number,4))
print ("\n7.0 *",number,"=",round(7.0*number,4))
print ("\n8.0 *",number,"=",round(8.0*number,4))
print ("\n9.0 *",number,"=",round(9.0*number,4))
print ("\n10.0 *",number,"=",round(10.0*number,4))

#Exponent Table 
print ("\nExponent Table for",number,".")

print (str(number) + " ^ " + "1.0", "=",round(number**1,4))
print (str(number) + " ^ " + "2.0", "=",round(number**2,4))
print (str(number) + " ^ " + "3.0", "=",round(number**3,4))
print (str(number) + " ^ " + "4.0", "=",round(number**4,4))
print (str(number) + " ^ " + "5.0", "=",round(number**5,4))
print (str(number) + " ^ " + "6.0", "=",round(number**6,4))
print (str(number) + " ^ " + "7.0", "=",round(number**7,4))
print (str(number) + " ^ " + "8.0", "=",round(number**8,4))
print (str(number) + " ^ " + "9.0", "=",round(number**9,4))
print (str(number) + " ^ " + "10.0", "=",round(number**10,4))

print (message.lower())
print (message.upper())
print (message.title())
print (message.split())



