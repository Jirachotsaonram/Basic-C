class Node:	# การสร้างคลาสโหนด
    def __init__(self,data):	
        self.left = None
        self.right = None
        self.data = data
class BinaryTree:	# การสร้างคลาสต้นไม้แบบไบนารี
    def create(self):	
          self.root =  Node(8)	
          self.root.left = Node(4)	
          self.root.right = Node(12)	
          self.root.left.left = Node(2)
          self.root.left.right = Node(6)
          self.root.right.left = Node(10)
          self.root.right.right = Node(14)
    def preorder(self, node):	# ฟังก์ชันการท่องต้นไม้แบบพรีออร์เดอร์
        if node != None:
            print (node.data,end=" ")
            self.preorder(node.left)
            self.preorder(node.right)
    def inorder(self, node):	# ฟังก์ชันการท่องต้นไม้แบบอินออร์เดอร์
        if node != None:
            self.inorder(node.left)
            print (node.data,end=" ")
            self.inorder(node.right)
    def postorder(self, node):	# ฟังก์ชันการท่องต้นไม้แบบโพสต์ออร์เดอร์
        if node != None:
            self.postorder(node.left)
            self.postorder(node.right)
            print (node.data,end=" ")
# กำหนดให้ tree เท่ากับคลาสต้นไม้แบบไบนารี เพื่อเรียกใช้งานฟังก์ชันในคลาส
tree = BinaryTree()	    
tree.create()	
print ("การท่องเข้าไปในต้นไม้แบบพรีออร์เดอร์")   
tree.preorder(tree.root)	        
print ("\nการท่องเข้าไปในต้นไม้แบบอินออร์เดอร์") 
tree.inorder(tree.root)	
print("\nการท่องเข้าไปในต้นไม้แบบโพสต์ออร์เดอร์")
tree.postorder(tree.root)    	
