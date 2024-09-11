//	 _______  _______  ___      ___   __    _  ______   ______    _______  __   __  _______ 
//	|       ||   _   ||   |    |   | |  |  | ||      | |    _ |  |       ||  |_|  ||       |
//	|    _  ||  |_|  ||   |    |   | |   |_| ||  _    ||   | ||  |   _   ||       ||    ___|
//	|   |_| ||       ||   |    |   | |       || | |   ||   |_||_ |  | |  ||       ||   |___ 
//	|    ___||       ||   |___ |   | |  _    || |_|   ||    __  ||  |_|  ||       ||    ___|
//	|   |    |   _   ||       ||   | | | |   ||       ||   |  | ||       || ||_|| ||   |___ 
//	|___|    |__| |__||_______||___| |_|  |__||______| |___|  |_||_______||_|   |_||_______|
//
//	Take in up to 80 alphanumeric characters and determine weather or not they make a palindrome
//
//	Sawyer Scheve
//	9/11/2024

// Custom Header File
#include "Arch-Linux-BTW.h"

int main () {
	char* input = new char[81];
	char* check = new char[81];
	bool isRunning = true;
	
	while (isRunning) {
		std::cout << "Welcome to Palindrome.\nInput a word or sentence and I will tell you if it is a palindrome." << std::endl;
		
		std::cin.getline(input, 81); // Get input cstring

		// Process cstring (remove spaces and reverse)
		input = remove(input, ' ');
		input = lowercase(input);
		check = reverse(input);

		// Check if input is palindrome
		if (strcmp(input, check) == 0) {
			std::cout << "Palindrome." << std::endl;
		}
		else {
			std::cout << "Not a palindrome." << std::endl;
		}

		// Check for second try
		// Side note: FUCK THIS STUPID FUCKING CHECK!!! IT TOOK ME TWICE AS LONG AS THE REST OF THE PROJECT!!!
		char* playAgain = new char[81];
		std::cout << "Would you like to try another word? [y/N]" << std::endl;
		std::cin >> playAgain;
		std::cin.ignore(81, '\n');
		playAgain = lowercase(playAgain);
		if (!strcmp(playAgain, "y") == 0) {
			isRunning = false;
		}
	}
}
