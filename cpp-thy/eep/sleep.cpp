#include <iostream>
#include <thread>
#include <chrono>

int main() {
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "Hi there!\n";
	return 0;
}

// what does chrono mean. why do we need to import two things here
// why not just one like sleep?
