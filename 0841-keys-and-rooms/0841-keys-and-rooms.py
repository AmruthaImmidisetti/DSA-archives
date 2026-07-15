class Solution:
    def dfs(self, node, rooms: List[List[int]], vis: List[int]):
        vis[node] = 1
        for nei in rooms[node]:
            if not vis[nei]:
                self.dfs(nei, rooms, vis)
    
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n = len(rooms)
        vis = [0]*n
        self.dfs(0, rooms, vis)
        return vis.count(1) == len(vis)