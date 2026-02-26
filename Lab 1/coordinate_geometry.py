import math

x1 = float(input("enter the coordinates for x1:\n"))
y1 = float(input("enter the coordinates for y1:\n"))
x2 = float(input("enter the coordinates for x2:\n"))
y2 = float(input("enter the coordinates for y2:\n"))

distance = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

print(f"Distance: {distance}")