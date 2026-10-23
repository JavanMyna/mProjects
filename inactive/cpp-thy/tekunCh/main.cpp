#include <iostream>
#include <string>
using namespace std;

//getline(cin, variableName) to replace std::cin >>
//Lets make something that says tekun cheer if I say "go tekun!" 
std::string permSay;


int main() {
	std::cout << "Perm says: ";
//	std::cin >> permSay;
	getline(cin, permSay);

	if (permSay == "go tekun!") {
		std::cout << "Go! Go! Go!";
}	else if (permSay == "waka-waka! 3,4!") {
		std::cout << "Waka-waka! *clap* *clap*\nWiki-wiki! *clap* *clap*\nWaka-waka! *clap* *clap*\nWiki-wiki! *clap* *clap*\nHang ingat kami siapa!\nKami tak heran siapa!\nSwipe swipe swipe habis!";
} else {
		std::cout << "The silence echoes...";
}
	return 0;
}
