import LinkedList from './src/linkedList';

// Global Linked list for sample operations
let linkedList = new LinkedList();

const createListFromArray = () => {
  linkedList.createListFromArray([1,2,3,4]);
  linkedList.printList();
};

const addNodeToHead = () => {
    linkedList.addNodeToHead(8);
    linkedList.printList();
};

const addNodeToTail = () => {
  linkedList.addNodeToTail(10);
  linkedList.printList();
};

console.log('Step 1');
createListFromArray();
console.log('Step 2');
addNodeToHead();
console.log('Step 3');
addNodeToTail();
console.log('Step 4');
console.log(linkedList.head);
console.log(linkedList.tail);
