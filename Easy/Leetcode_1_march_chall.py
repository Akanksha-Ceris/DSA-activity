class Solution:
    def minPartitions(self, n: str) -> int:
        biggest = 0
        for digit in n:
            digit = int(digit)
            if digit>biggest:
                biggest = digit
        return biggest    
        