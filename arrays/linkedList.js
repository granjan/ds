const LinkedListNode = requrie('./linkedListNode');

export default class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  addNodeToHead(data) {
    const newNode = new LinkedListNode(data, this.head);
    this.head = newNode;

    if (!this.tail)
      this.tail = newNode;

    return this;
  }

  addNodeToTail(data) {
    const newNode = new LinkedListNode(data);
    return this;
  }

  deleteNode(data) {
    return this;
  }
}
