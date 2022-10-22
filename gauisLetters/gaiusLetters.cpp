#include "gaiusLetters.h"

GaiusLetters::GaiusLetters(const string main){
	text = main;
}

string GaiusLetters::convert(){
	int length = text.length();
	int index;
	for(int x =0; x < length; x++){
		bool found = false;
		int y=0;	
		while(!found){
			if(text.at(x) == map[y]){
				index = y;
				found = true;
			}else if(text.at(x) == ' '){
				index=26;
				found = true;
			}
			y++;
		}
		cout << alphabet[index] << endl;
		decrypted.push_back(alphabet[index]);
	}
	return decrypted;
}
