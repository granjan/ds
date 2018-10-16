class Item(object):
    def __init__(self, data):
        self.data = data
        self.next = None
        super(Item, self).__init__()
