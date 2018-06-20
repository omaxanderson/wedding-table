#include "Wedding.h"

#include <iostream>
#include <fstream>
#include <sstream>

Wedding::Wedding(int tableSize, int stranger, int know, 
		int couple, int listSize) : tableSize(tableSize),
		stranger(stranger), know(know), couple(couple), size(listSize) {
	init();
}

Wedding::~Wedding() {
}

void Wedding::init() {
	adjMat = new int*[size];
	for (int i = 0; i < size; i++) {
		adjMat[i] = new int[size];
	}
}

void Wedding::setList(std::string filename) {
	std::ifstream infile;
	infile.open(filename);

	std::string line;
	while (getline(infile, line)) {
		std::istringstream iss(line);
		std::string token;

		// get first token, options are group, couple, or neither
		iss >> token;
		if (token == "couple") {
			// read two names and assign them the couple score
		} else if (token == "group") {
			// read until newline and assign all of them the "know" score
		} else {
			// just an acquaintance, read the next name as well and assign know score
		}

		while (iss >> token) {

		}
		std::cout << std::endl;
	}

}
