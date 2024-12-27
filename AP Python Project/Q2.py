# Rayyan Aamir | 24K-0687 | BCS-1F
# Q: A small ball rolls horizontally off the edge of a tabletop that is 1.20m high. It strikes the floor at a point 1.52m horizontally from the table edge.(a) How long is the ball in the air? (b) What is its speed at the instant it leaves the table?
# Reference: Fundamentals of Physics by Halliday & Resnick
# Chapter 4: Motion in 1D/2D Dimensions | Page No. 85 | Question 22 | CLO 3

import math

def projectile_motion():
    
    height = float(input("Enter the height of the table (in meters): "))
    horizontal_distance = float(input("Enter the horizontal distance from the table edge (in meters): "))

    g = 9.8

    # (a) Solving for the time the ball is in the air
    time = math.sqrt(2 * height / g)
    print(f"Time the ball is in the air for: {time:.2f} seconds")

    # (b) Solving for the horizontal speed at the instant it leaves the table
    horizontal_speed = horizontal_distance / time
    speed = horizontal_speed
    print(f"The speed of the ball at the instant it leaves the table: {speed:.2f} m/s")

projectile_motion()