array = [4, 5, 6, 7, 8, 9, 10]
prime_numbers = []

for numbers in array:
    if numbers == 2:
        prime_numbers.append(numbers)
    else:
        is_prime = True
        for i in range(2,numbers):
            if numbers%i == 0:
                is_prime = False
                break
            if is_prime:
                print(number)
                prime_numbers.append(numbers)
        return len(prime_numebrs)
        
