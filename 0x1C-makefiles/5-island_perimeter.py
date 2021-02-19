#!/usr/bin/python3
"""islan perimeter"""


def island_perimeter(grid):
    """function perimeter
    grid is a list of list of integers"""

    perimeter = 0
    for m_list in grid:
        perimeter += m_list.count(1) * 4

    
    for x in range(len(grid)-1):
        for y in range(len(grid[x])-1):
            if grid[x][y] == 1 and grid[x][y+1] == 1:
                perimeter -= 2
            if grid[x][y] == 1 and grid[x+1][y] == 1:
                perimeter -= 2

    return perimeter
