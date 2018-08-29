import LinkedListNode from './linkedListNode';

export default class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  createListFromArray(dataList = []) {
    dataList.forEach((data) => this.addNodeToHead(data));
    return this;
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
    if (!this.tail) {
      this.tail = newNode;
    }
    if (!this.head) {

    }
    return this;
  }

  deleteNode(data) {
    return this;
  }

  printList() {
    if (!this.head) {
      return;
    }
    let currentNode = this.head;
    while(currentNode) {
      currentNode.printNode();
      currentNode = currentNode.next;
    }
    return;
  }
}
