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
//	9/3/2024

// Custom Header Files
#include "remove.h"

int main () {
	char input[81];
	bool isRunning = true;
	
	while (isRunning) {
		std::cout << "Welcome to Palindrome.\nInput a word or sentence and I will tell you if it is a palindrome." << std::endl;
		
		std::cin >> input;

		std::cout << remove(input, ' ') << std::endl;
	}
}
