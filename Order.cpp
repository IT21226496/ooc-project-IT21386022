#include "Order.h"
#include<cstring>

Order::Order()
{
	strcpy(order_Id, "");
}

void Order::displayOrderDetails(const char porder_id)
{
	strcpy(order_Id, "porder_id");
}

Order::~Order()
{
	//destructor
}
