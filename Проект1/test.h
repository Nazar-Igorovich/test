#pragma once

namespace Program
{

	class test
	{
	private:

		char* Id;
		char* Name;
		int Balance;
		int Credit;
	public:
		
		
		test(void);
		
		test(char*, char*, int , int);

		~test(void);
		
	

		void	setId(char*);
		char*	getId();
		void	setName(char*);
		char*	getName();
		void	setBalanse(int);
		int  	getBalanse();
		void	setCredit(int);
		int		getCredit();
		

		void    Print(test&);

		
		void	AddBalance(int);
		void	Withdraw(int);

		int		Enter();

	};
}