class Queue:
    def __init__(self):
        self.items = []
        
    def isEmpty (self):
      return len(self.items) == 0 
  
    def insert(self,value):
        self.items.append(value)
    
    def delete(self):
        if(self.isEmpty()):
            try:
                print("Queue is empty ohh")
            except self.isEmpty():
               raise Exception ( "Queue is empty")
        else :  
           return self.items.pop(0)
        
    
queue  = Queue() 
queue.insert(10)
queue.insert(20)
queue.insert(30)
queue.insert(40)
print(queue.isEmpty())
print(queue.delete())
print(queue.delete())
print(queue.delete())
print(queue.delete())
queue.delete()