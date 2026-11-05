# Matrix Representation of Graph
class Graph:
    def __init__(self,vertex):
        self.mat = [[0]*vertex for _ in range(vertex)]
        self.size =vertex
# unguided Graph
    def add_edge(self,src,dest):
        if(0<=src < self.size and 0<= dest < self.size):
            self.mat[src][dest] = 1
            self.mat[dest][src] = 1
        else:
            print("Invalid Edge !")
    
    def print_graph(self):
        for row in self.mat:
            print(" ".join(map(str,row)))
            
        
        
        
# G = Graph(5)

# G.add_edge(0,1)
# G.add_edge(0,2)
# G.add_edge(1,3)
# G.add_edge(2,4)
# G.add_edge(3,4)
# G.add_edge(2,3)
# G.print_graph()


# Adjancency List Representation of Graph

# class LGraph:
#     def __init__(self,):
#         self.adjList = {}
#     def add_vertex(self,vertex):
#         if vertex not in self.adjList:
#             self.adjList[vertex] = []
            
#     def add_edge(self,src,dest):
#         self.add_vertex(src)
#         self.add_vertex(dest)
        
#         self.adjList[src].append(dest)
#         self.adjList[dest].append(src)
        
        
#     def print_lgraph(self):
#         for vertex in self.adjList:
#             print(f"{vertex} -> {self.adjList[vertex]}")
            
# g = LGraph()

# g.add_edge(1,2)
# g.add_edge(1,4)
# g.add_edge(2,4)
# g.add_edge(3,4)
# g.add_edge(3,5)
# g.add_edge(4,5)
# g.print_lgraph()

# # vertex 1 --> 2 degree
# # vertex 2 --> 2 degree
# # vertex 3 --> 2 degree
# # vertex 4 --> 4 degree
# # vertex 5 --> 2 degree
