class Node:
    def __init__(self,value):
        self.data = value
        self.right = None
        self.left = None
    
# 20 30 15 40 25 
def insert(root,value):
    if(root==None):
        return Node(value)
    if(root.data == value):
        return root
    if(root.data > value):
        root.left = insert(root.left,value)
    else:
        root.right = insert(root.right,value)
    return root
    
def search(root,value):
    if(root==None):
       print ( "Nothing to search 404 NOT FOUND", end="/n")
       return 
    if(root.data == value):
        print (f"Element Found: {root.data}", end="/n")
        return
    if(root.data > value):
        search(root.left,value)
    else:
        search(root.right,value)
def get_successor(root):
    root = root.right
    while ( root != None and root.left != None):
        root = root.left
    return root 

def delete(root, value):
    if(root == None):
        print("Noting to delete")
        return root
    if(root.data > value):
        root.left = delete(root.left,value)
    elif(root.data < value):
        root.right = delete(root.right, value)
    else:
        if(root.left == None):
            return root.right
        if(root.right == None):
            return root.left
        else:
            successor = get_successor(root)
            root.data = successor.data
            root.right = delete(root.right, successor.data)
    return root
        
def inOrder(root):
    if(root != None):
        inOrder(root.left)
        print(root.data,end=" ")
        inOrder(root.right)
        
root = insert(None,20) 
# print (root.data,end=" Root at first  ")
root = insert(root,15)
# print (root.data,end=" Root at second ")
root = insert(root,30)
# print (root.data,end=" Root at third ")
root =insert(root,12)
# print (root.data,end=" Root at fourth ")
root =insert(root,40)
# print (root.data,end=" Root at fifth ")
root =insert(root,18)
# print (root.data,end=" Root at sixth ")
root =insert(root,25)
# print (root.data,end=" Root at seventh ")
root =insert(root,50)
# print (root.data,end=" Root at eigth ")

inOrder(root)
# search(root,500)
delete(root, 20)
print('\n')
inOrder(root)