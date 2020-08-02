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


std::vector<size_t> findWordPos (std::string word, std::string text)
{
	size_t textlen = text.length();
	size_t wordPos = 0;
	std::vector <size_t> wordPosVect;

	for (size_t startPos = 0; startPos < textlen; startPos++){
		wordPos = text.find(word, startPos);
		if (wordPos != std::string::npos){
			wordPosVect.push_back(wordPos);
		};
	};
	return wordPosVect;
};


std::vector<size_t> cleanVect (std::vector<size_t> initialVect)
{
	

	std::vector<size_t> finalVect;
	size_t initialVectLen = initialVect.size();
	std::cout << "Initial Vector Length: " << initialVectLen << "\n";
	for(size_t i=0; i< initialVectLen; i++){
		if(initialVect[i] != initialVect [i+1]){
		finalVect.push_back(initialVect[i]);
		std::cout << "word found in position: " << finalVect[i] << "\n";
		};
	};
	std::cout << "Cleaned vector size: "<<finalVect.size() << "\n";
	return finalVect;
};


std::string replaceWordText (
	std::string word,
	std::string text,
	std::vector<size_t> cleanVect) {

	std::cout << "We are in replaceWordText \n";
	std::cout << "The cleaned vector size in replaceWordText is: " << cleanVect.size() <<"\n";
	std::string bleepedText = text;
	size_t wordlen = word.length();
	size_t textlen = text.length();
	std::string bleepWord = "********";

	for (size_t j=0; j < cleanVect.size(); j++) {
		std::cout << "starting position: " << cleanVect[j] << "\n";
		//size_t wordPos = findWordPos(word, text, cleanVect[j]);
		//bleepedText = text.replace(cleanVect[j], wordlen, bleepWord, cleanVect[j], wordlen);
		bleepedText = text.replace(cleanVect[j], wordlen, bleepWord);
	};

	return bleepedText;

};


int main() {

	std::string word = "broccoli";

	std::string text = "I love green broccoli,\n"
					"I don't see my life without broccoli.\n"
					"Each day I eat broccoli and it keeps me healthy. I try to get everyone to eat broccoli.";

	
	printWordText(word, text);

	std::vector<size_t>  wordPosVect = findWordPos(word, text);
	for(int y; y < wordPosVect.size(); y++){
		std::cout << wordPosVect[y] << "\n";
	};

	std::vector<size_t> vecti;
	vecti.push_back(1);
	vecti.push_back(2);
	vecti.push_back(3);
	std::vector<size_t> cleanedVect = cleanVect(wordPosVect);

	std::string finalText = replaceWordText(word, text, cleanedVect);
	std::cout << finalText << "\n";


}