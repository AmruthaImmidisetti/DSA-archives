class Solution:
    def dfs(self, node, adj:List[List[int]], vis: List[int]):
        vis[node] = 1
        for nei in adj[node]:
            if not vis[nei]:
                self.dfs(nei, adj, vis)
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        adj = defaultdict(list)
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
        print(adj)
        vis = [0] * n
        self.dfs(source , adj, vis)
        print(vis)
        return vis[destination] == 1