class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        res = []

        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 0:
                    res.append((i, j))

        for p, q in res:
            for i in range(len(matrix)):
                matrix[i][q] = 0

            for j in range(len(matrix[0])):
                matrix[p][j] = 0