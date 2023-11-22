#!/usr/bin/python3
"""
This module is used to measure the perimeter of a grid island
"""


def island_perimeter(grid):
    """
    This function calculates the perimeter of an island of 1's
    in the input grid. This is done by assuming that each integer
    represents a square of side length 1, then every value of 1 is
    compared to the integers around it (1's are assumed to never be
    on the edge) on each of the four sides, and the perimeter is
    increased by 1 for every value that's found to be 0

    Args:
        grid ([[int]]): The grid representation of our little island
    """
    perimeter = 0
    for i in range(0, len(grid)):
        for sq in range(0, len(grid[i])):
            if grid[i][sq]:
                if not i or not grid[i - 1][sq]:
                    perimeter += 1
                if not sq or not grid[i][sq - 1]:
                    perimeter += 1
                if i == len(grid) or not grid[i + 1][sq]:
                    perimeter += 1
                if sq == len(grid[i]) or not grid[i][sq + 1]:
                    perimeter += 1
    return perimeter
