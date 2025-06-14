#include <exception>
using namespace std;

#ifndef __Billing_Gateway_h__
#define __Billing_Gateway_h__

// #include "Menu_manager.h"
// #include "Billing_Service.h"

class Menu_manager;
class Billing_Service;
class Billing_Gateway;

class Billing_Gateway
{
	private: int _gateway;
	public: Menu_manager* _interact;
	public: Billing_Service* _association;

	public: void process_payment();

	public: void transcation_validate();
};

#endif
