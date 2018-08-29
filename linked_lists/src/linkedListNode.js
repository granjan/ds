export default class LinkedListNode {
	constructor(data, next = null) {
		this.data = data;
		this.next = next;
	}

	printNode() {
		console.log(this.data);
	}
}
