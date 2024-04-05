#!/usr/bin/python3
"""
    Here the documentation of the module
"""

def island_perimeter(grid):
    """Here the documentation of the function"""
    if grid is None or len(grid) == 0:
        return 0
    row = len(grid)
    col = len(grid[0])
    edges = 0
    size = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j-1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
