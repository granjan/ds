from node import Node

def preOrder(root):
    if root == None:
        return
    print(root.value)
    preOrder(root.left)
    preOrder(root.right)
    return

def postOrder(root):
    if root is None:
        return
    postOrder(root.left)
    postOrder(root.right)
    print(root.value)
    return

def inOrder(root):
    if (root == None):
        return
    inOrder(root.left)
    print(root.value)
    inOrder(root.right)
    return

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
    print('PreOrder Traversal')
    preOrder(root)
    print('PostOrder Traversal')
    postOrder(root)
    print('InOrder Traversal')
    inOrder(root)
