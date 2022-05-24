#Application to convert MPH to MPS -->

#Welcome message
print ("Welcome to the speed converter app.\n")
name = input("What is your name: ")
print ("Hello", name,"! I'am  Mr. converter.\n")

#Taking User Input
speed_mph = float(input ("Please Write the speed(in miles per hour): "))
speed_mps = (speed_mph*0.4474)#converting mph to mps

#Rounding upto two decimal precision
speed_mps = round(speed_mps,2)

#Printing the output
print ("The speed in MPS is:",speed_mps)
