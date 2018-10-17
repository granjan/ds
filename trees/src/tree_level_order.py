from node import Node
from queue import Queue

def level_order_traversal(root):
    if not root:
        return False
    queue = Queue()
    current = root
    queue.enqueue(data=current)
    while queue.count:
        node = queue.dequeue()
        print(node.value, end=" ")
        if node.left:
            queue.enqueue(node.left)
        if node.right:
            queue.enqueue(node.right)
    print()
    print(queue.count)

def main():
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)
    return root

if __name__ == '__main__':
    root = main()
    level_order_traversal(root)
