class Node : 
  def __init__(self, value= None):
    self.data = value
    self.next = None
    self.prev = None
    
    
class DoublyLinkedList:
    def __init__(self):
        self.head = None
        
        
    def insertionAtTheEnd(self, value):
        temp = Node(value)
        if(self.head == None):
         self.head = temp
         return
     
        t = self.head 
        while (t.next != None):
          t= t.next
          
        t.next = temp
        temp.prev = t
    def insertionAtTheBeginning(self, value):
        temp = Node(value)
        
        if(self.head == None):
            self.head = temp
            return
        
        t = self.head 
        temp.prev = None
        temp.next = t
        t.prev = temp
        self.head = temp
        
    def insertionAtTheMiddle(self, value, x ):
        temp = Node(value)
        
        if (self.head == None):
            self.head = temp
            return 
        t = self.head
        while ( t != None):
            if (t.data == x):
                temp.next = t.next
                t.next.prev = temp
                t.next = temp
                temp.prev = t
                
                
            t = t.next
        return "Value not found"
    def delete(self, x):
   
        if(self.head== None):
            print("Linked List is empty ")
   
        t = self.head 
        if(t.data == x):
            self.head = t.next
            self.head.prev = None
            return 
        while (t.next!=None):
     
            if(t.data == x):
                t.prev.next = t.next
                t.next.prev = t.prev
                return 
       
            t = t.next
       
        if(t.data == x and t.next == None):
            t.prev.next = None
     
      
    def printDoublyLinkedList(self):
        t = self.head
        while( t!= None):
          print(t.data, end = " <---> ")
          t = t.next
          
     
        
        
        
obj = DoublyLinkedList()
obj.insertionAtTheEnd(10)
obj.insertionAtTheEnd(20)   
obj.insertionAtTheEnd(30)
obj.insertionAtTheBeginning(5)

obj.insertionAtTheMiddle(15,10)
obj.delete(30)

obj.printDoublyLinkedList()