# Lists Challenge 7: Different Types of Lists Program

# Initializing lists
num_strings = ["15", "100", "55", "42"]
num_ints = [15, 100, 55, 42]
num_floats = [1.4, 5.6, 45.6, 65.7]
num_lists = [[1,2,3], [4,5,6], [7,8,9]]

# Summary Table
print("\t\t\tSummary Table")
print("\nThe variable num_strings is of",type(num_strings))
print("It contains the elements: ",num_strings)
print("The element ",num_strings[0],"is of ",type(num_strings[0]))

print("\nThe variable num_ints is of",type(num_ints))
print("It contains the elements: ",num_ints)
print("The element ",num_ints[0],"is of ",type(num_ints[0]))

print("\nThe variable num_floats is of",type(num_floats))
print("It contains the elements: ",num_floats)
print("The element ",num_floats[0],"is of ",type(num_floats[0]))

print("\nThe variable num_lists is of",type(num_lists))
print("It contains the elements: ",num_lists)
print("The element ",num_lists[0],"is of ",type(num_lists[0]))

# Sorting num_strings & num_ints
print("\nNow sorting num_strings and num_ints")
num_strings.sort()
num_ints.sort()
print("Sorted num_strings: ", num_strings)
print("Sorted num_ints: ", num_ints)

print("\nStrings are sorted alphabetically while integers are sorted numerically!")