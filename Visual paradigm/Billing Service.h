#ifndef BILLING SERVICE_H
#define BILLING SERVICE_H

class Billing_Service {

private:
	integer Bill_ID;
	double Amount;

public:
	void Billing_gateway();

	void Calculate_bill();

	void Gerneate_invoice();
};

#endif
