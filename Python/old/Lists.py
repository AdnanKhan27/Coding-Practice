#Lists

#Changing elements of the list
shopping_list = ['banana', 'apple', 'kiwi','chocalate']
print (shopping_list)

shopping_list[3] = 'strawberries'
print (shopping_list)

#Adding elements to a list .append(),insert()
my_list = ['plane', 'car', 'bus']
print ('\n' + str(my_list))

my_list.append('train')
print (my_list)

my_list.insert(1, "Driver")
print (my_list)


#Removing elements from a list .pop(),.remove()
shopping_list.remove('strawberries') #the .remove() will remove the first similiar element.
print ("\n" + str(shopping_list))

removed_element = my_list.pop(2)
print ("my_list after removing",str(removed_element),":",str(my_list))

del shopping_list[0] 
print (shopping_list)

#Dynamic sHIT
my_list.append(input ("Enter the element you want to add: "))
my_list.insert(1,input ("Enter the element you want to add: "))
print ('\n' + str(my_list))

my_list.remove(input ("Enter the element you want to remove: "))
#ERROR >>>> my_list.pop(int( input ("Enter the position of element you want to remove: ")))
print ('\n' + str(my_list))
