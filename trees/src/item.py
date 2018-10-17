class Item(object):
    def __init__(self, data):
        super(Item, self).__init__()
        self.data = data
        self.next = None
