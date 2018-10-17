from item import Item

class Stack(object):
    def __init__(self):
        super(Stack, self).__init__()
        self.top = None
        self.capacity = 10
        self.count = 0

    def push(self, data=None):
        if self.count == self.capacity:
            return False
        item = Item(data=data)
        if not self.top:
            self.top = item
            self.count += 1
        else:
            item.next = self.top
            self.top = item
        return True

    def peek(self):
        if self.top:
            return self.top.data
        return None

    def pop(self):
        if self.top:
            popped = self.top
            self.top = self.top.next
            return popped.data
        return None

    # def pop(self):
    #     if not self.stack:
    #         return 'No element in the stack'
    #     return self.stack.pop()
