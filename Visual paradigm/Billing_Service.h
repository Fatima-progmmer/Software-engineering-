#include <exception>
using namespace std;

#ifndef __Billing_Service_h__
#define __Billing_Service_h__

// #include "Order_Manager.h"
// #include "Billing_Gateway.h"

class Order_Manager;
class Billing_Gateway;
class Billing_Service;

class Billing_Service
{
	private: integer _bill_ID;
	private: double _amount;
	public: Order_Manager* _call;
	public: Billing_Gateway* _association;

	public: void billing_gateway();

	public: void calculate_bill();

	public: void gerneate_invoice();
};

#endif
