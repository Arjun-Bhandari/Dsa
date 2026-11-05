class Circular_Queue:
    def __init__(self, size):
        if size <= 0:
            raise ValueError("Queue size must be positive")
        self.size = size
        self.items = [None]*size
        self.front = 0
        self.rear = -1
        self.count = 0
    
    def isEmpty(self):
        return self.count == 0
    
    def isFull(self):
        return self.size == self.count
    
    def enqueue(self, val):
        if(self.isFull()):
            print("Queue is Full")
            return
            
        self.rear = (self.rear+1) % self.size
        self.items[self.rear] = val
        self.count += 1
        
    
    def dequeue(self):
        if(self.isEmpty()):
            print ("Queue is empty Nothing to dequeue")
            return
        
        x = self.items[self.front] 
        self.items[self.front] = None
        self.front = (self.front+1) % self.size
        self.count -= 1
        return x
            
    def print(self):
        for i in self.items:
            print(i)
       


obj = Circular_Queue(5)
obj.enqueue(30)
obj.enqueue(40)
obj.enqueue(50)
print(obj.dequeue())
print("____")
obj.print()
obj.enqueue(1)
obj.enqueue(2)
obj.enqueue(3)
obj.enqueue(4)
print("___")
obj.print()


       
           
           