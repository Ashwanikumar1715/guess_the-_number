#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
    //to generate random no...
	srand(time(0)); 
    // to generate random number between 1 and 100
	num = rand() % 100 + 1; 
	cout << "Guess My Number Game\n\n";
//main logic that decides the win and loss!!!
	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}