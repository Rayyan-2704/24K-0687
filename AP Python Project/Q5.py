# Rayyan Aamir | 24K-0687 | BCS-1F
# Q: A small but measurable current of 1.2 x 10^-10 A exists in a copper wire whose diameter is 2.5 mm.The number of charge carriers per unit volume is 8.49 x 10^28 m^3.Assuming the current is uniform, calculate the (a) current density and (b) electron drift speed.
# Reference: Fundamentals of Physics by Halliday & Resnick
# Chapter 26: Current and Resistance | Page No. 766 | Question 8 | CLO 7

import math

def calculate_electron_drift():
    
    current = float(input("Enter the current in the wire (in A): "))
    diameter = float(input("Enter the diameter of the wire (in mm): "))
    n = float(input("Enter the number of charge carriers per unit volume (in m^-3): "))
    # In Python, e stands for 10 power exponent (1.6e-19 = 1.6 x 10^-19)
    q = 1.6e-19 # Charge of an electron

    radius = (diameter / 2) * 1e-3
    cross_sectional_area = math.pi * radius**2

    # (a) Calculating current density (J = I / A)
    current_density = current / cross_sectional_area

    # (b) Calculating electron drift speed (v = J / (n * q))
    drift_speed = current_density / (n * q)

    print(f"Current density: {current_density:.2e} A/m^2")
    print(f"Electron drift speed: {drift_speed:.2e} m/s")

calculate_electron_drift()