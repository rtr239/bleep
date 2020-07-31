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

std::string replaceWordText (
	std::string word,
	std::string text,
	size_t startPos) {

	std::string bleepedText = text;
	size_t wordlen = word.length();
	size_t textlen = text.length();
	std::string bleepWord = "************************";

	while (startPos < textlen) {
		size_t wordPos = findWordPos(word, text, startPos);
		bleepedText = text.replace(wordPos, wordlen, bleepWord, 0, wordlen);
		startPos++;
	};

	return bleepedText;

};


int main() {

	std::string word = "broccoli";

	std::string text = "I love broccoli,\n"
					"I don't see my life without broccoli.\n"
					"Each day I eat broccoli.";

	
	printWordText(word, text);

	std::cout << replaceWordText(word, text, 0) << "\n";

}