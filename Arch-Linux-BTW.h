//	 _______  ______    _______  __   __    ___      ___   __    _  __   __  __   __   
//	|   _   ||    _ |  |       ||  | |  |  |   |    |   | |  |  | ||  | |  ||  |_|  |  
//	|  |_|  ||   | ||  |       ||  |_|  |  |   |    |   | |   |_| ||  | |  ||       |  
//	|       ||   |_||_ |       ||       |  |   |    |   | |       ||  |_|  ||       |  
//	|       ||    __  ||      _||       |  |   |___ |   | |  _    ||       | |     |   
//	|   _   ||   |  | ||     |_ |   _   |  |       ||   | | | |   ||       ||   _   |  
//	|__| |__||___|  |_||_______||__| |__|  |_______||___| |_|  |__||_______||__| |__|  
//	                             _______  _______  _     _                             
//	                            |  _    ||       || | _ | |                            
//	                            | |_|   ||_     _|| || || |                            
//	                            |       |  |   |  |       |                            
//	                            |  _   |   |   |  |       |                            
//	                            | |_|   |  |   |  |   _   |                            
//	                            |_______|  |___|  |__| |__|
//
//	A general C++ tools header file
//
//	Author: Sawyer Scheve
//	9/5/2024

//  _  _             _           ___ _ _        
// | || |___ __ _ __| |___ _ _  | __(_) |___ ___
// | __ / -_) _` / _` / -_) '_| | _|| | / -_|_-<
// |_||_\___\__,_\__,_\___|_|   |_| |_|_\___/__/
//                                              

#include <iostream>
#include <cstring>

//  ___                       
// | _ \___ _ __  _____ _____ 
// |   / -_) '  \/ _ \ V / -_)
// |_|_\___|_|_|_\___/\_/\___|
//                            

char* remove(char* input, char charToRemove) { // !! BROKEN !!
	char* output = new char[80];
	int counter = 0;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] != charToRemove) {
			output[counter] = input[i];
			counter++;
		}
	}
	output[counter] = '\0';
	return output;	
}
