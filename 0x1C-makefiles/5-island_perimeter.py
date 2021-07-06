#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    '''find permiter'''
    perimeter = 0
    width  = len(grid)

    if not grid:
        return 0

    for row in range(0, width):
        height = len(grid[row]);
        if (height <= 2):
            continue
        for col in range(0, height):
            if row == 0 or col == 0 or col == height - 1 or row == width - 1:
                if (grid[row][col]):
                    return 0

            if (grid[row][col]):
                perimeter += grid[row][col - 1] == 0
                perimeter += grid[row - 1][col] == 0
                perimeter += grid[row][col + 1] == 0
                perimeter += grid[row + 1][col] == 0

    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
