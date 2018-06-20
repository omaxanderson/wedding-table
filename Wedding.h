#ifndef _WEDDING_H_
#define _WEDDING_H_

#include <string>

class Wedding {

	public:
		Wedding(int, int, int, int, int);
		~Wedding();

		void setList(std::string filename);

	private:
		void init();

		int tableSize, stranger, know, couple;
		int size;
		int** adjMat;
};

#endif
