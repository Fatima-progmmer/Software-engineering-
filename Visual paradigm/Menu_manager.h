#include <exception>
#include <list>
using namespace std;

#ifndef __Menu_manager_h__
#define __Menu_manager_h__

// #include "Billing_Gateway.h"

class Billing_Gateway;
class Menu_manager;

class Menu_manager
{
	private: list _menuItem;
	public: Billing_Gateway* _interact;

	public: void get_Avaiable_item();

	public: void get_product_detail();
};

#endif
