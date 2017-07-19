#include <conio.h>
#include <iostream>
#include "test.h"

using namespace std;

using Program::test;


int main()
{
	test p1;

	test p2("00002", "Jerry", 4000, 8000);

	test p3;
		
	p1.setId("00001");
	p1.setName("Tom");
	p1.setBalanse(5000);
	p1.setCredit(1000);

	
	p1.Print(p1);
	p2.Print(p2);
	p3.Print(p3);

	p1.AddBalance(55);
	
//	cout << p1.getBalanse();

	p1.Withdraw(435);

//	p1.Print(p1);

	p1.Withdraw(50000);

	p1.Print(p1);

	p1.Enter();
	
	p1.Print(p1);

	_getch();
	return 0;
}