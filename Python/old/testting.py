def sum_divisors(n):
  sum = 0
  # Return the sum of all divisors of n, not including n
  x =1
  while n!=0  and x<n:
    if n%x==0:
      sum+=x
    x+=1
  if n==0:
     return "0"
  return sum

print(sum_divisors(0))
# 0
print(sum_divisors(3)) # Should sum of 1
# 1
print(sum_divisors(36)) # Should sum of 1+2+3+4+6+9+12+18
# 55
print(sum_divisors(102)) # Should be sum of 2+3+6+17+34+51
# 114
