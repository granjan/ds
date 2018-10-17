from item import Item

class Queue(object):
    def __init__(self):
        super(Queue, self).__init__()
        self.front = None
        self.rear = None
        self.capacity = 10
        self.count = 0

    def enqueue(self, data):
        if self.count < self.capacity:
            item = Item(data)
            if not self.front:
                self.front = item
                self.rear = self.front
            else:
                self.rear.next = item
                self.rear = item
            self.count += 1
            return True
        return False

    def dequeue(self):
        if not self.front:
            return None
        dequeued = self.front.data
        self.front = self.front.next
        self.count -= 1
        return dequeued
