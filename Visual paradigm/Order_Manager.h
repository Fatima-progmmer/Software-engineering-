#include <exception>
#include <list>
using namespace std;

#ifndef __Order_Manager_h__
#define __Order_Manager_h__

// #include "Billing_Service.h"

class Billing_Service;
class Order_Manager;

class Order_Manager
{
	private: Integer _cust_ID;
	private: String _cust_name;
	private: list _menuItem;
	private: <menu_manager> _menu_manger;
	private: <billing_service> _billing_service;
	public: Billing_Service* _call;

	public: void create_order();

	public: void gerneate_bill();
};

#endif
