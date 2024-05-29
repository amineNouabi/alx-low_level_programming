#!/usr/bin/python3
"""Island Perimeter"""

neighbors_delta = [[-1, 0], [0, -1], [1, 0], [0, 1]]


def cell_perimeter(cell_i, cell_j, grid, N, M):
    """Counts perimeter for an elemantary cell
        By counting water/land edges.
    """
    perimetre = 0

    if not grid[cell_i][cell_j]:
        return perimetre

    for [delta_i, delta_j] in neighbors_delta:
        i, j = cell_i + delta_i, cell_j + delta_j
        if i < 0 or j < 0 or i >= N or j >= M:
            perimetre += 1
            continue
        if not grid[i][j]:
            perimetre += 1

    return perimetre


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0

    N = len(grid)
    M = len(grid[0])

    for i in range(N):
        for j in range(M):
            perimeter += cell_perimeter(i, j, grid, N, M)
    return perimeter
