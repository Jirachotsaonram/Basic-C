


class Node:
    def _init_(self,data):
        self.data = data
        self.next = None
class LinkedList:
    def _init_(self):
        self.head = None
        self.tail = None
    def isEmpty(self):
        return self.head == None
    def add_begin(self,data):
        new_node = Node(data)
        if self.head == None:
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head = new_node
    def add_end(self,data):
        new_node = Node(data)
        if self.head == None:
            self.head = self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
    def add_middle(self,data,position):
        new_node = Node(data)
        current_node = self.head
        previous_node = None
        current_position = 0
        while current_position < position:
            previous_node = current_node
            current_node = current_node.next
            current_position +=1
            if current_position == position:
                current_node = previous_node.next
                previous_node.next =new_node
                new_node.next = current_node
    def size(self):
        current_node = self.head
        count = 0
        while current_node !=None:
            count +=1
            current_node = current_node.next
        return count
    def remove_begin(self):
        current_node = self.head
        previous_node = None
        count = 0
        while current_node.next !=None:
            previous_node = current_node
            current_node = current_node.next
            count +=1
        current_node = previous_node.next
        previous_node.next = current_node.next
        self.tail = previous_node
    def remove_middle(self,position):
        current_node = self.head
        previous_node = None
        current_position = 0
        while current_position < position:
            previous_node = current_next
            current_node = current_node.next
            current_position +=1
            if current_position == position:
                current_node = previous_node.next
                next_node = current_node.next
                previous_node.next = next_node
    def search(self,data):
        current_node = self.head
        found = False
        while current_node != None and not found:
            if current_node.data == data:
                found = Tuue
            else:
                current_node = current_node.next
        print("\nค้นหาข้อมูล",data,"ปรากฏว่า",found)
    def display(self):
        current_node = self.head
        while current_node !=None:
            print(current_node.data,end="->")
            current_node = current_node.next
#กำหนดให้ mylist เท่ากับคลาสลิงค์ลิสต์ ดพื่อเรียกใช้งานฟั่งชันในคลาส
mylist = LinkedList()
mylist.add_begin("Monday")
mylist.add_end("Tuesday")
mylist.add_end("Thursday")
mylist.add_end("Friday")
mylist.add_end("Saturday")
mylist.add_end("Sunday")
nylist.add_middle("Wednesday")
mylist.remove_begin()
mylist.remove_end()
mylist.remove_middle(2)
print("Singly Linked List")
mylist.display()
mylist.search("Friday")


