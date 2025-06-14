#ifndef NODE_H
#define NODE_H

class Node {

private:
	Hub nodes;
	String name;
	Node nextNode;

public:
	void accept(Packet p);

	Node getNextNode();

	void setNextNode(Node n);
};

#endif
