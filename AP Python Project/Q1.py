# Rayyan Aamir | 24K-0687 | BCS-1F
# Q: Vector A has a magnitude of 6.00 units, vector B has a magnitude of 7.00 units and A . B has a value of 14.0. What is the angle between the directions of A and B?
# Reference: Fundamentals of Physics by Halliday & Resnick
# Chapter 3: Vectors | Page No. 59 | Question 39 | CLO 1

import math

def calculate_angle():
    
    a_magnitude = float(input("Enter the magnitude of vector A: "))
    b_magnitude = float(input("Enter the magnitude of vector B: "))
    dot_product = float(input("Enter the dot product of vectors A and B: "))

    cos_theta = dot_product / (a_magnitude * b_magnitude)

    if -1 <= cos_theta <= 1:
        angle_in_radians = math.acos(cos_theta)
        angle_in_degrees = math.degrees(angle_in_radians)
        print(f"The angle between the vectors A and B is approximately {angle_in_degrees:.2f}°")
    else:
        print("Invalid input, the computed cosine value is out of range.")

calculate_angle()