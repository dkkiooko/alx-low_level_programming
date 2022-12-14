#!/usr/bin/python3
"""module that finds perimeter"""


def island_perimeter(grid):
    """gets perimeter

    Args:
        grid (_list_): _list of 1s(land) and 0s(water)_

    Returns:
        _type_: _description_
    """
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    c += 1
                if j == 0 or grid[i][j - 1] != 1:
                    c += 1
                if j == width or grid[i][j + 1] != 1:
                    c += 1
                if i == length or grid[i + 1][j] != 1:
                    c += 1
    return c
