const printList = (root) => {
  if (root === null)
    return;
  console.log(root.data);
  printList(root.next);
};
