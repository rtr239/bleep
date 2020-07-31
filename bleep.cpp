#include <iostream>
#include <string>

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


size_t findWordPos (std::string word, 
	std::string text, size_t startPos){

	size_t wordPos = text.find(word, startPos);

	if(wordPos != std::string::npos){
			std::cout << "Position of the word to bleep: " 
			<< wordPos << "\n";
			return wordPos;
	} else {
			std::cout << "Out of bounds."
			" Please enter a positon less than the lenght"
			" of the sentence. \n";
			return 0;
	};
	
};


int main() {

	std::string word = "broccoli";

	std::string text = "I love broccoli,\n"
					"I don't see my life without broccoli.\n"
					"Each day I eat broccoli.";

	size_t wordPos;
	std::string bleepWord = "************************";

	
	printWordText(word, text);
	wordPos = findWordPos(word, text, 0);


	text.replace(wordPos, 8, bleepWord, 0, 8);
	std::cout << text << "\n";


}