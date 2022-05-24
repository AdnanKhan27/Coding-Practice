#Summary Table
print ("\t\tSUMMARY TABLE")

#defining lists
num_strings = ['14','45','67','100']
num_ints = [14,45,78,90]
num_floats = [2.3,4.5,12.3,67.8]
num_lists = [[1,2,3],[3,4,5],[4,5,7],[4,5]]

#Summary of the lists
print ("\nThe variable num_strings is a",(type(num_strings)))
print ("It consists the elements:",num_strings)
print ("The element " + num_strings[0] + " is " + str(type(num_strings[0])))

print ("\nThe variable num_ints is a",type(num_ints))
print ("It consists the elements:",num_ints)
print ("The element " + str(num_ints[0]) + " is " + str(type(num_ints[0])))

print ("\nThe variable num_floats is a",type(num_floats))
print ("It consists the elements:",num_floats)
print ("The element " + str(num_floats[0]) + " is " + str(type(num_floats[0])))

print ("\nThe variable num_lists is a",type(num_lists))
print ("It consists the elements:",num_lists)
print ("The element " + str(num_lists[0]) + " is " + str(type(num_lists[0])))

#Sorting the lists
num_strings.sort()
num_ints.sort()

print("\nNow sorting num strings and num ints...")
print("Sorted num_strings:",num_strings)
print("Sorted num_ints:  ",num_ints)
print("\nStrings are sorted alphabetically while ints are sorted numerically.")

