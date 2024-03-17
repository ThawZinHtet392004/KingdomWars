#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Archer.h"
namespace GameLoop
{

	std::string GetUserInput()
	{
		const std::vector <std::string> acceptedCharacters { "x", "y"};
		std::string input;
		do
		{
			std::cout << "\npress [x] to quit or [y] continue: ";
			cin >> input;

		} while (!(input == "x"));

		return input;

	}

	
	int run()
	{
		bool END_GAME = false;
		while (!END_GAME)
		{
			std::string userInput = GetUserInput();
			if (userInput == "x")
			{
				END_GAME = true;
			}
		}
		return 0;
	}
}
