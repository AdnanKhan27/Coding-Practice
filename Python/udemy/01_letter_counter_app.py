# Basic Data types Challenge 1
# Letter Counter App
print("Hello, Welcome to the Letter Counter App🔢")
username = input("What is your name? ")
print(f"""Hello {username}!
I will count the number of times a specific letter occurs in a message.
""")

# taking user input all in lowercase
message = input("Please Enter a message: ").lower()
letter = input("Enter a letter to count the occurences of: ").lower()

# calculating the number of occurences of letter in 
# message & storing the count in letter_count

letter_count = message.count(letter)
print(f"The number of occurences of {letter} in {message} is: {letter_count}")
