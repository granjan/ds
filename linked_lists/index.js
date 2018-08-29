import LinkedList from './src/linkedList';

function init() {
  let linkedList = new LinkedList();
  linkedList.createListFromArray([1,2,3,4]);
  linkedList.printList();
}

init();
