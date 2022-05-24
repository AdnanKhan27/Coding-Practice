#Letter Counter App

print ("Welcome to the letter counter app.")

#Taking user input

name = input ("\nWhat is your name: ")
print ("Hello " + name.title() + "!" )

print ("\nI am Mr. Robot and,\nI will count the occurence of a specific letter in your given message.")

message = input("\nPlease write here the message: ")
letter = input("\nPlease enter the letter you want to count, in your message: ")

#Giving the user, the output

message = message.lower()
letter = letter.lower()
letter_count = message.count(letter)

#Final output
print ("\nThe number of", letter + "'s", "in your message are: " + str(letter_count) + ".")
