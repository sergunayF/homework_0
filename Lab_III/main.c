#include <stdio.h>
#include <time.h>

#include "ArrDym.h"

#define setLen 10

int main() {

	system("color a");
	srand(time(NULL));

	_dynamicArr _tmpArr = _createArray();

	for (int i = NULL; i < setLen; i++) {
		_addValue(&_tmpArr, rand(100) % 10);
	}

	_printArr(_tmpArr);
	_destroyArr(_tmpArr);

	return 0;
}