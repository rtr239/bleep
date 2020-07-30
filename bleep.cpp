#include <iostream>

std::string word = "broccoli";

std::string text = "I love broccoli,\n"
					"I don't see my life without broccoli.\n"
					"Each day I eat broccoli.";


void printWordText(std::string word, std::string text) {

	std::cout << "bleep version 1 \n";

	std::cout << "The word to bleep is: "
	<< '"'
	<< word 
	<< '"'
	<< "\n";
	
	std::cout << "The initial text is: " 
	<< '"'	
	<< text
	<< '"' 
	<< "\n";
	};



int main() {

	printWordText(word, text);


}