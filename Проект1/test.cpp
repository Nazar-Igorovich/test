#include <conio.h>
#include <iostream>
#include "test.h"

using namespace std;
namespace Program
{
	test::test()
	{
		Id = "---";
		Name = "---";
		Balance = 0;
		Credit = 0;
	}

	test::test(char* id, char* name, int balanse, int credit)
	{
		Id = id;
		Name = name;
		Balance = balanse;
		Credit = credit;
	}
	

	test::~test()
	{
	}


	void test::setId(char* id)
	{
		Id = id;
	}
	char* test::getId()
	{
		return Id;
	}

	void test::setName(char* name)
	{
		Name = name;
	}
	char* test::getName()
	{
		return Name;
	}

	void test::setBalanse(int b)
	{
		Balance = b;
	}
	int test::getBalanse()
	{
		return Balance;
	}

	void test::setCredit(int c)
	{
		Credit = c;
	}
	int test::getCredit()
	{
		return Credit;
	}




	void test::Print(test& p)
	{
		cout << "ID:		" << p.getId() << endl;
		cout << "Name:		" << p.getName() << endl;
		cout << "Balsnce:	" << p.getBalanse() << "$" << endl;
		cout << "Credit:		" << p.getCredit() << "$" << endl;
		cout << endl;
	}

	void test::AddBalance(int add) 
	{
		Balance += add;
	}

	void test::Withdraw(int wit) 
	{
		
		
		if ((Balance -= wit) < 0)
		{
			Balance += wit;
		}
		else Balance = Balance;
	}


	int test::Enter()
	{
		cout << "Enter:";
		int n;
		cin >> n;
		Balance += n;
		cout << endl;
		return Balance;
	}
	
}