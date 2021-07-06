#!/usr/bin/python3

def island_perimeter(grid):
    '''find permiter'''
    perimeter = 0
    size = len(grid)

    if not grid:
        return 0

    for row in range(1, size - 1):
        for col in range(1, size - 1):
            if (grid[row][col]):
                    perimeter += grid[row][col - 1] == 0
                    perimeter += grid[row - 1][col] == 0
                    perimeter += grid[row][col + 1] == 0
                    perimeter += grid[row + 1][col] == 0
    return (perimeter)
