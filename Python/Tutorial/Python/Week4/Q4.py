s1 = [10, 11, 15, 20, 55, 76, 90, 84]
s2 = [4, 9, 12, 98, 35, 42, 4, 5, 10]

avg1 = float(sum(s1) / len(s1))
avg2 = float(sum(s2) / len(s2))

maxN = max(max(s1), max(s2))
maxAvg = max(avg1, avg2)

print("Highest Average:", maxAvg)
print("Highest Score:", maxN)