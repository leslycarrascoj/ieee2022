#include "gaiusLetters.cpp"

int main(){
	string text;
	cin>>text;

	GaiusLetters cipher1(text);
	cout << cipher1.convert() << endl;

}
