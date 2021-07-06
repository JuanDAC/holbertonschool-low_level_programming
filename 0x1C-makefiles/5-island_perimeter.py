#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    '''find permiter'''
    perimeter = 0
    size = len(grid)

    if not grid:
        return 0

    for row in range(1, size - 1):
        if (len(grid[row]) <= 2):
            continue
        for col in range(1, size - 1):
            if (grid[row][col]):
                perimeter += grid[row][col - 1] == 0
                perimeter += grid[row - 1][col] == 0
                perimeter += grid[row][col + 1] == 0
                perimeter += grid[row + 1][col] == 0

    return perimeter
