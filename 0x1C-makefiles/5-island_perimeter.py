#!/usr/bin/python3
"""islan perimeter"""


def island_perimeter(grid):
    """function perimeter
    grid is a list of list of integers"""

    perimeter = 0

    for m_list in grid:
        perimeter += m_list.count(1) * 4

    for m_list in grid:
        for i in range(len(m_list)-1):
            if m_list[i] == 1 and m_list[i+1] == 1:
                perimeter -=2

    for x in range(len(grid)-1):
        for y in range(len(grid[0])):
            if grid[x][y] == 1 and grid[x+1][y] == 1:
                perimeter -= 2

    return perimeter
