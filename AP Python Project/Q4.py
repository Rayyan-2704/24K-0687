# Rayyan Aamir | 24K-0687 | BCS-1F
# Q: An oscillator consists of a block of mass 0.500 kg connected to a spring. When set into oscillation with amplitude 35.0 cm, the oscillator repeats its motion every 0.500 s. Find the (a) period, (b) frequency, (c) angular frequency, (d) spring constant, (e) maximum speed, and (f) magnitude of the maximum force on the block from the spring.
# Reference: Fundamentals of Physics by Halliday & Resnick
# Chapter 15: Oscillations | Page No. 436 | Question 13 | CLO 5

import math

def calculate_answers():
    # Given values
    mass = float(input("Enter the mass of the block (in kg): "))
    amplitude = float(input("Enter the amplitude of oscillation (in cm): "))
    time_period = float(input("Enter the time period of oscillation (in seconds): ")) 

    amplitude = amplitude / 100  # Converting amplitude to meters

    # (a) Calculating Period (T)
    period = time_period

    # (b) Calculating Frequency (f = 1 / T)
    frequency = 1 / period

    # (c) Calculating Angular frequency (angular freq. = 2 * pi * f)
    angular_frequency = 2 * math.pi * frequency

    # (d) Calculating Spring constant (k = m * angular freq.^2)
    spring_constant = mass * angular_frequency**2

    # (e) Calculating Maximum speed (v_max = angular freq. * A)
    max_speed = angular_frequency * amplitude

    # (f) Calculating Maximum acceleration (a_max = angular freq.^2 * A)
    max_acceleration = angular_frequency**2 * amplitude
    # Calculating Magnitude of maximum force (F_max = m * a_max)
    max_force = mass * max_acceleration

    print(f"(a) Period: {period:.2f} s")
    print(f"(b) Frequency: {frequency:.2f} Hz")
    print(f"(c) Angular frequency: {angular_frequency:.2f} rad/s")
    print(f"(d) Spring constant: {spring_constant:.2f} N/m")
    print(f"(e) Maximum speed: {max_speed:.2f} m/s")
    print(f"(f) Maximum acceleration: {max_acceleration:.2f} m/s^2")
    print(f"    Magnitude of maximum force: {max_force:.2f} N")

calculate_answers()