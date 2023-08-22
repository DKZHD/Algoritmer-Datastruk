#include <iostream>

void Factorial(int n)
{
	static uint64_t Number = 1;
	if (n == 1)
	{
		std::cout << "The Final Number is: "<< Number << std::endl;
	}
	else if(n>1)
	{
		Number *= n;
		std::cout << Number << std::endl;
		Factorial(n-1);
	}
}

void Fibonacci(int n)
{
	static uint64_t N_1 = 1;
	static uint64_t N_2 = 0;
	static uint64_t FibonacciNumber = 1;
	
	if(n==1)
	{
		std::cout << "The Final Number is: " << FibonacciNumber << std::endl;
	}
	else if(N_2 == 0)
	{
		std::cout << N_2 << std::endl;
	}
	if(n>1)
	{
		std::cout << FibonacciNumber << std::endl;
		FibonacciNumber = N_1 + N_2;
		N_2 = N_1;
		N_1 = FibonacciNumber;
		Fibonacci(n - 1);
	}
}

int main()
{
	int InputNumber = 0;
	std::string InputLetter = "String Here";
	std::cout << "Write 1 for Factorial or 2 for Fibonacci: ";
	std::cin >> InputLetter;
	if(InputLetter == "1")
	{
		std::cout << "\033c";
		std::cout << "Factorial.. num num: ";
		std::cin >> InputNumber;
		Factorial(InputNumber);
	}
	else if(InputLetter =="2")
	{
		std::cout << "\033c";
		std::cout << "Fibonacci.. num num: ";
		std::cin >> InputNumber;
		Fibonacci(InputNumber);
	}
	else
	{
		std::cout << "Not valid" << std::endl;
		return main();
	}
	return 0;
}
