#pragma once
#include "product.h"

class Order : private Product {
private:
	int quantity_; // So luong san pham
	int sell_price_; // Gia ban moi san pham

public:
	void Input();
	void Output();
	long GetSubTotal();
	long GetVAT();
	long GetProfit();
	long GetQuantity();

	void static GenerateOrders(Order orders[], int n);
	void static PrintOrders(Order orders[], int n);

	friend long GetMaxVAT(Order orders[], int n);
	friend void SortOrderByProfit(Order orders[], int n);
	friend void PrintOrdersWithMaxTAX(Order orders[], int n);
	friend long GetSumSubTotal(Order orders[], int n);
	friend long GetSumSubTotal(Order a, Order b);
	friend long GetMaxQuantity(Order orders[], int n);
	friend void PrintOrdersWithMaxQuantity(Order orders[], int n);
};
