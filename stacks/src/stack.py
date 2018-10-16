class Stack:
    def __init__(self):
        self.stack = []

    def push(self, value=None):
        if value not in self.stack:
            self.stack.append(value)
            return True
        else:
            return False

    def peek(self):
        if self.stack:
            return self.stack[0]
        return None

    def pop(self):
        if not self.stack:
            return 'No element in the stack'
        return self.stack.pop()
