#ifndef HUB_H
#define HUB_H

class Hub {

private:
	std::vector<Node> nextNode;

public:
	void accept(Packet p);

	void inserNode(Node n);
};

#endif
