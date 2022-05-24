#Application to convert MPH to MPS -->
#Modifying it using functions

#Welcome message
print ("Welcome to the speed converter app.\n")
name = input("What is your name: ")
print ("Hello", name,"! I'am  Mr. converter.\n")

#Taking User Input
speed_mph = float(input ("Please Write the speed(in miles per hour): "))

#Defining a function for speed calculation
def convert_speed():
    speed_mps = (speed_mph*0.4474)#converting mph to mps
    speed_mps = round(speed_mps,2)#Rounding upto two decimal precision
    return speed_mps#returning the value




#Printing the output
print ("The speed in MPS is:",convert_speed())
