//4:55pm 13oct26 I want to kolej matrikulasi selangor
//so much, i dont even wanna bother.

/*
5. Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the
purchase:
• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.

totalPurchase = 1000 * 45.50

• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid for the
stock.

commissionPaid_buy = totalPurchase * 0.02

Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.

totalSold = 1000 * 56.90

• He paid his stockbroker another commission that amounted to 2% of the amount he
received for the stock.

commissionPaid_sold = totalSold * 0.02

Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the
two commissions to his broker. (If the amount of profit that your program displays is
a negative number, then Joe lost money on the transaction.)
*/

#include <iostream>
using namespace std;

int main() {
	double totalPurchase, commissionPaid_buy, totalSold, commissionPaid_sold, profit;

	totalPurchase = 1000 * 45.50;
	commissionPaid_buy = totalPurchase * 0.02;
	totalSold = 1000 * 56.90;
	commissionPaid_sold = totalSold * 0.02;
	profit = totalSold - totalPurchase - commissionPaid_buy - commissionPaid_sold;

	cout << "Amount of money Joe paid for the stock: RM" << totalPurchase << endl;
	cout << "Amount of commission Joe paid his broker when he bought the stock: RM" << commissionPaid_buy << endl;
	cout << "Amount that Joe sold the stock for: RM" << totalSold << endl;
	cout << "Amount of commission Joe paid his broker when he sold the stock: RM" << commissionPaid_sold << endl;
	cout << "Amount of profit after selling and paying two commissions to his broker: RM" << profit << endl;
	
	if (profit < 0) {
		cout << "It seems like Joe lost some quite of money on the transaction" << endl;
	}

	return 0;
}



