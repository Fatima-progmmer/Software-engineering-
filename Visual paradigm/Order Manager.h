#ifndef ORDER MANAGER_H
#define ORDER MANAGER_H

class Order_Manager {

private:
	Integer Cust_ID;
	String Cust_name;
	list MenuItem;

public:
	void Create_order();

	void Gerneate_bill();
};

#endif
