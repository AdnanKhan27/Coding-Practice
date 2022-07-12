# Greedy Algo| Bulbs Problem 
# https://leetcode.com/problems/bulb-switcher/

A = [1,0,0,1,1,0,1,0,1]
cost = 0

for b in A:
    if cost%2 == 0:
        b = b
    else:
        b = not b
    print('After even/odd: ',b)
    if b%2 == 1:
        print('After continue: ',b)
        continue
    else:
        cost += 1
    print('After switching: ',b)
    
print(cost)

'''if __name__ == '__main__':
    bulbs(,arr)'''