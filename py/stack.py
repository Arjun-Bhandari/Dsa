class Stack :
    def __init__(self):
        self.items = []
        
        
    def length(self):
        return len(self.items)
    
    def push(self, value):
        self.items.append(value)
        
        
    def peek(self):
        if(len(self.items) == 0):
            raise Exception("Stack is Empty")
        else :
            return self.items[0]
        
    def pop(self):
        if(len(self.items) == 0):
            raise Exception("Stack is Empty")
        else : 
            return self.items.pop()
        

stack = Stack()
stack.push(10)
stack.push(20)
stack.push(30)
stack.push(40)
print(stack.pop())
# print(stack.peek())

