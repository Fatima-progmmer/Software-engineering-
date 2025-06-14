#ifndef PACKET_H
#define PACKET_H

class Packet {

private:
	String originator;
	String destination;
	String content;

public:
	boolean isOriginator(Node n);

	boolean isDestination(Node n);

	String getContent();
};

#endif
