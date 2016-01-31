//Guess my Number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	

	srand(time(NULL));
	int  tries = 0;
	int guess;
	int input = 1;
	int secretNumber;


	cout << "\tWelcome to Guess My Number\n\n";

	if (input == 1)
	{
		secretNumber = rand() % 100 + 1;
		do
		{
			
			

			cout << "\nEnter a guess: ";
			cin >> guess;
			++tries;
			
			if (guess > secretNumber)
			{
				cout << "Too High!\n\n";
			}

			else if (guess < secretNumber)
			{
				cout << "TOO low!\n\n";
			}

			else
			{
				cout << "\nThat's it! You got it in " << tries << " guesses!";
				cout << "\nPlay Again? Press 1 for Yes or 2 for No: ";
				cin >> input;


				tries = 0;
				secretNumber = rand() % 100 + 1;


				if (input == 2)
				{
					return 0;
				}


			}

		} while (input != 2);
	}

	else
	{
		return 0;
	}

	}

