import LinkedListNode from './linkedListNode';

export default class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  createListFromArray(dataList = []) {
    dataList.forEach((data) => this.addNodeToHead(data));
  }

  addNodeToHead(data) {
    const newNode = new LinkedListNode(data, this.head);
    this.head = newNode;
    if (!this.tail) {
      this.tail = newNode;
    }
  }

  addNodeToTail(data) {
    const newNode = new LinkedListNode(data);
    if (this.tail) {
      this.tail.next = newNode;
      this.tail = newNode;
    } else {
      this.tail = newNode;
    }

    if (!this.head) {
      this.head = this.tail;
    }
  }

  deleteNode(data) {
    if (!this.head) {
      return;
    }
    if (this.head.data === data) {
      this.head = null;
      this.tail = null;
      return;
    }
    let currentNode = this.head;
    while(currentNode.next) {
      if (currentNode.data === data) {

      }
    }
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
  }
}
