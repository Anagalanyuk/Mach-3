#include<iostream>

#include"Console.h"

#include"ConsoleColor.h"

#include"Game.h"

#include<ctime>


int main()
{
	//int foo[100];
	//srand(time(nullptr));
	//for (int i = 0; i < 100; ++i)
	//{
	//	foo[i] = rand() % 6 + 1;
	//}

	//for (int i = 0; i < 100; ++i)
	//{
	//	std::cout << foo[i] << " ";
	//}

	//std::cout << std::endl;
	Game mach3;
	mach3.Play();

	system("pause");
}