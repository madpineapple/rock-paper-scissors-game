// RockPaperScissors.cpp 
//By Charles Daoust

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{


	srand(time(0));

	int choice;
	double compchoice;

	//Create do while loop so program will loop as long as needed.

	do {
		std::cout << "This is a rock paper scissors game.\n";
		std::cout << " Pick 1 for rock.\n";
		std::cout << " Pick 2 for scissors.\n";
		std::cout << " Pick 3 for paper.\n";
		std::cout << " Pick 4 to Quit. \n";
		std::cin >> choice;

		//The computer will generate a random number between 1-3 which will be the computers choice

		for (int x = 1; x < 2; x++)
		{
			compchoice = 1 + (rand() % 3);
		}



		//If both the player and compter picked the same choice
		if (choice == compchoice)
		{
			std::cout << "Tied! \n";
		}

		//If you picked rock and computer picked scissors
		else if ((choice == 1) && (compchoice == 2))
		{
			std::cout << "You picked rock. Computer picked scissors \n";
			std::cout << "You win! \n";
		}

		//If you picked rock and computer picked paper
		else if ((choice == 1) && (compchoice == 3))
		{
			std::cout << "You picked rock. Computer picked paper \n";
			std::cout << "Computer wins! \n";
		}

		//If you picked scissors and computer picked rock
		else if ((choice == 2) && (compchoice == 1))
		{
			std::cout << "You picked scissors. Computer picked rock \n";
			std::cout << "Computer wins! \n";
		}

		//If you picked scissors and computer picked paper
		else if ((choice == 2) && (compchoice == 3))
		{
			std::cout << "You picked scissors. Computer picked paper \n";
			std::cout << "You win! \n";
		}

		//If you picked paper and computer picked rock
		else if ((choice == 3) && (compchoice == 1))
		{
			std::cout << "You picked paper. Computer picked rock \n";
			std::cout << "You win! \n";
		}

		//If you picked paper and computer picked scissors
		else if ((choice == 3) && (compchoice == 2))
		{
			std::cout << "You picked paper. Computer picked scissors \n";
			std::cout << "Computer wins! \n";
		}
	} while (choice != 4);


	return 0;


}

