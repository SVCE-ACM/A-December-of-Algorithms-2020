'''
Runtime: 80 ms, faster than 31.02 % of Python3 online submissions for Dungeon Game.
Memory Usage: 15.7 MB, less than 10.47 % of Python3 online submissions for Dungeon Game.
'''


class Solution:

    def calculateMinimumHP(self, dungeon) -> int:
        n = len(dungeon)
        m = len(dungeon[0])

        dp = [[-1] * (m+1) for i in range(n+1)]

        def MinHealth(dungeon, i, j, dp):
            if(dp[i][j] != -1):
                return dp[i][j]

            if i == len(dungeon) - 1 and j == len(dungeon[0]) - 1:
                if dungeon[i][j] > 0:
                    return 1
                else:
                    return abs(dungeon[i][j]) + 1

            if i == len(dungeon) or j == len(dungeon[0]):
                return 1000000000

            aa = dungeon[i][j]
            dp[i][j] = max(1, min(MinHealth(dungeon, i + 1, j, dp),
                                  MinHealth(dungeon, i, j + 1, dp)) - aa)

            return dp[i][j]

        return MinHealth(dungeon, 0, 0, dp)
