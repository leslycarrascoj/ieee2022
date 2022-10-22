
#ifndef GAIUSLETTERS_H
#define GAIUSLETTERS_H

#include <iostream> 
#include <string>
using namespace std;

class GaiusLetters {
	string text, decrypted;
	char map[27]="mnopqrstuvwxyzabcdefghijkl";
	char alphabet[28]="abcdefghijklmnopqrstuv ";	
	public:

		GaiusLetters(const string main);
		string convert();

};

#endif

