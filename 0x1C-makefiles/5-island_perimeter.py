#!/usr/bin/python3
""" Grid Perimeter. """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid. """
    row = len(grid)  # row length
    col = len(grid[0])  # column length
    perimeter = 0

    # Loop through rows in grid
    for i in range(row):

        # Loop through columns in rows
        for j in range(col):

            # If cell is 1, land zone is met
            if grid[i][j] == 1:

                # Check if land is surrounded by water on the top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1  # increase perimeter by 1

                # Check if land is surrounded by water on the bottom
                if i == (row - 1) or grid[i + 1][j] == 0:
                    perimeter += 1  # increase perimeter by 1

                # Check if land is surrounded by water on the left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1  # increase perimeter by 1

                # Check if land is surrounded by water on the right
                if j == (col - 1) or grid[i][j + 1] == 0:
                    perimeter += 1  # increase perimeter by 1

    return perimeter
