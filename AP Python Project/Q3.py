# Rayyan Aamir | 24K-0687 | BCS-1F
# Q: An elevator cab and its load have a combined mass of 1600kg. Find the tension in the supporting cable when the cab, originally moving downward at 12m/s, is brought to rest with constant acceleration in a distance of 42m.
# Reference: Fundamentals of Physics by Halliday & Resnick
# Chapter 5: Force and Motion — I | Page No. 119 | Question 33 | CLO 4

import math

def calculate_tension():
   
    mass = float(input("Enter the combined mass of the elevator cab and load (in kg): "))
    initial_velocity = float(input("Enter the initial velocity of the cab (in m/s): "))
    stop_distance = float(input("Enter the stopping distance (in meters): "))

    g = 9.8

    # (1) Calculating the constant acceleration using the kinematic equation (2as = v^2 - u^2):
    acceleration = -(initial_velocity ** 2) / (2 * stop_distance)

    # (2) Calculating the tension in the cable (Taking upwards direction as positive):
    tension = mass * (g + abs(acceleration))

    print(f"The constant acceleration is: {abs(acceleration):.2f} m/s^2")
    print(f"The tension in the supporting cable is: {tension:.2f} N")

calculate_tension()