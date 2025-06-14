#include "Node.h"

void Node::accept(Packet p) {
	// TODO - implement Node::accept
	throw "Not yet implemented";
}

Node Node::getNextNode() {
	return this->nextNode;
}

void Node::setNextNode(Node n) {
	this->nextNode = n;
}
