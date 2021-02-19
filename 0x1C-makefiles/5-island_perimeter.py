#!/usr/bin/python3
"""islan perimeter"""

def island_perimeter(grid):
    """function perimeter
    grid is a list of list of integers"""

    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            new_a = 0
            if grid[x][y] == 1:
                new_a = 4
                if grid[x][y-1] == 1:
                    new_a -= 1
                if grid[x][y+1] == 1:
                    new_a -= 1
                if grid[x-1][y] == 1:
                    new_a -= 1
                if grid[x+1][y] == 1:
                    new_a -= 1
            perimeter += new_a
    return perimeter
