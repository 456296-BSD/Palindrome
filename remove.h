//	 ______    _______  __   __  _______  __   __  _______ 
//	|    _ |  |       ||  |_|  ||       ||  | |  ||       |
//	|   | ||  |    ___||       ||   _   ||  |_|  ||    ___|
//	|   |_||_ |   |___ |       ||  | |  ||       ||   |___ 
//	|    __  ||    ___||       ||  |_|  ||       ||    ___|
//	|   |  | ||   |___ | ||_|| ||       | |     | |   |___ 
//	|___|  |_||_______||_|   |_||_______|  |___|  |_______|
//
//	Delete a given character from a cstring up to 80 chars long.
//
//	Sawyer Scheve
//	9/3/2024

// Header Files
#include <iostream>
#include <cstring>

char* remove(char* inputCharString, char charToRemove) { // !! BROKEN !!
	char* outputCharString = new char[80];
	for (int i = 0; i < strlen(inputCharString); i++) {
		if (inputCharString[i] != charToRemove) {
			strcat(outputCharString, inputCharString);
		}
	}
	strcat(outputCharString, "\0");
	return outputCharString;	
}
