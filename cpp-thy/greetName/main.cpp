#include <iostream>
#include <string>
std::string name;
using namespace std;

int main() {
	cout << "Enter your name: " ;
	cin >> name;
	std::cout << "Hi " <<  name << "!";
}
