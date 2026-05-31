class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        asteroids.sort()
        arr = []
        arr.extend([0]*len(asteroids))
        if asteroids[0] > mass:
            return False
        arr[0] = asteroids[0] + mass
        for i in range(1, len(asteroids)):
            if arr[i-1] >= asteroids[i]:
                arr[i] = asteroids[i] + arr[i-1]
            else:
                return False
        return True
        