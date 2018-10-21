from collections import defaultdict


class Graph:

    def __init__(self):
        self.graph=defaultdict(list)
        self.queue=[]
        self.visited=set()



    def add_edge(self,u,v):
        self.graph[u]=v

    def bfs(self,node):

        self.queue.append(node)

        print(self.queue)

        while self.queue:
           frontier = self.queue.pop(0)
           self.visited.add(frontier)
           for sucessor in self.graph[frontier]:
                print(self.visited)
                print(self.queue)

 
                if sucessor not in self.visited: 
                    self.visited.add(sucessor) 
                    self.queue.append(sucessor)
        print(self.queue)
        print(self.visited)






g = Graph() 
g.add_edge(1,[2,3,6]) 
g.add_edge(2, [4,5]) 
g.add_edge(3, [6]) 
g.add_edge(4, [5]) 
g.add_edge(5, [3]) 
g.add_edge(6, []) 
  
g.bfs(1)






