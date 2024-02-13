#include <stdio.h>
#include <time.h>
#include "ArrDym.h"

#define LEN 5 //Можно интегрировать в интерфейс;

int main() {

	system("color a");
	srand(time(NULL));

	_dynamicArr _tmpArr = _createArray(LEN);

	for (int i = NULL; i < _tmpArr._len; i++) {
		_addValue(&_tmpArr, rand(100) % 10);
	}

	_printArr(_tmpArr); printf("\n");
	_destroyArr(_tmpArr);

	return 0;
}