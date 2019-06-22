// sale_management.cpp : Defines the entry point for the console application.
//

#include "order.h"
#include <iostream>
using namespace std;

int main()
{
	Order orders[10];

	// Nhap so hoa don
	int n;
	do
	{
		cout << "So hoa don: ";
		cin >> n;
		if (cin.fail()) // Cai dat nang cao: Kiem tra du lieu co phai mot so hay khong
		{
			cin.clear();
			cin.ignore(1024, '\n');
			n = 0;
		}
	} while (n < 1 || n > 10);

	// Nhap thong tin cac hoa don
	cout << "\nNhap thong tin cac hoa don:" << endl;
	Order::GenerateOrders(orders, n);

	// Sap xep cac hoa don theo tien lai giam dan
	cout << "\nDanh sach hoa don sau khi sap xep tien lai giam dan" << endl;
	SortOrderByProfit(orders, n);
	Order ::PrintOrders(orders, n);

	// Tong tien cac hoa don
	cout << "\nTong tien cac hoa don: " << setw(47) << "" << setw(15) << GetSumSubTotal(orders, n) << endl;

	// Cac hoa don co tien thue cao nhat
	cout << "\nCac hoa don co tien thue cao nhat " << endl;
	PrintOrdersWithMaxTAX(orders, n);

	// Cac san pham co luong ban nhieu nhat
	cout << "\nCac san pham co so luong ban nhieu nhat" << endl;
	PrintOrdersWithMaxQuantity(orders, n);
	cout << endl;
	return 0;
}
