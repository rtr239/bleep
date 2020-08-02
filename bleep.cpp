#include <iostream>
#include <string>
#include <vector>

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


std::vector<size_t> findWordPos (std::string word, 
	std::string text){

	size_t textlen = text.length();
	size_t wordPos = 0;
	std::vector <size_t> wordPosVect;

	for (size_t startPos = 0; startPos < textlen; startPos++){
		wordPos = text.find(word, startPos);
		if (wordPos != std::string::npos){
			//std::cout << wordPos << "\n";	
			wordPosVect.push_back(wordPos);
			//std::cout << wordPosVect[startPos] << "\n";
		};
	};

return wordPosVect;
	/*if(wordPos != std::string::npos){
			std::cout << "Position of the word to bleep: " 
			<< wordPos << "\n";
			return wordPos;
	} else {
			std::cout << "Out of bounds."
			" Please enter a positon less than the lenght"
			" of the sentence. \n";
			return 0;
	};*/
	
};


std::vector<size_t> cleanVect (std::vector<size_t> initialVect){
	std::vector<size_t> finalVect;
	size_t initialVectLen = initialVect.size();
	//std::cout << initialVectLen << "\n";
	for(size_t i=0; i< initialVectLen; i++){
		if(initialVect[i] != initialVect [i+1]){
		finalVect.push_back(initialVect[i]);
		std::cout << finalVect[i] << "\n";
		};
	};
	return finalVect;
};


/*std::string replaceWordText (
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

};*/


int main() {

	std::string word = "broccoli";

	std::string text = "I love broccoli,\n"
					"I don't see my life without broccoli.\n"
					"Each day I eat broccoli and it keeps me healthy.";

	
	printWordText(word, text);

	//std::cout << replaceWordText(word, text, 0) << "\n";


	std::vector<size_t>  wordPosVect = findWordPos(word, text);

	std::vector<size_t> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);

	std::vector<size_t> cleanedVect = cleanVect(wordPosVect);

	std::cout << cleanedVect.size() << "\n";


}