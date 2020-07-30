#include <iostream>

int main() {

	std::cout << "bleep version 1 \n";

	std::string word = "broccoli";

	std::string text = "I love broccoli,\n"
	"I don't see my life without broccoli.\n"
	"Each day I eat broccoli";

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


}