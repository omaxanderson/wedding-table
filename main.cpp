#include "Wedding.h"

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[]) {
	int know = 1;
	int couple = 50;
	int stranger = 0;
	int tableSize = 5;
	std::string filename = "list.txt";

	for (int i = 1; i < argc; i++) {
		if (!std::strcmp(argv[i], "-k")) {
			try {
				know = std::stoi(argv[i + 1]);
			} catch (...) {
				std::cout << "Error! Values must be set to integers." << std::endl;
				return 1;
			}
		} else if (!std::strcmp(argv[i], "-c")) {
			try {
				couple = std::stoi(argv[i + 1]);
			} catch (...) {
				std::cout << "Error, values must be set to integers." << std::endl;
				return 1;
			}
		} else if (!std::strcmp(argv[i], "-ts")) {
			try {
				tableSize = std::stoi(argv[i + 1]);
			} catch (...) {
				std::cout << "Error, values must be set to integers." << std::endl;
				return 1;
			}
		} else if (!std::strcmp(argv[i], "-f")) {
			try {
				filename = argv[i + 1];
			} catch (...) {
				std::cout << "Error, values must be set to integers." << std::endl;
				return 1;
			}
		} 
		i++;
	}

	auto costFunction = [] (int i, int j) { return i + j; };

	Wedding wedding(tableSize, stranger, know, couple, 10);
	wedding.setList(filename);

	return 0;
}
