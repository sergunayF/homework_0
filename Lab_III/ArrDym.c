#include <stdio.h>
#include <stdlib.h>
#include "ArrDym.h"

void* _memoryAlloc(int size);
void* _reMemory(int size, int** arr);

_dynamicArr _createArray() {
	
	_dynamicArr _createArr;
	
	_createArr.arr = _memoryAlloc(sizeof(int));
	if (!_createArr.arr) return;
	*_createArr.arr = NULL;
	
	return _createArr;
}

void* _memoryAlloc(int size) {

	void* ptr = malloc(size);
	if (!ptr) {
		printf("ERR_MEM_ALLOC");
		return 0;
	}
	return ptr;
}

void* _reMemory(int size, int** arr) {

	void* ptr = realloc(arr, size);
	if (!ptr) {
		printf("ERR_MEM_ALLOC");
		return 0;
	}

	return ptr;
}

void _addValue(_dynamicArr* arr, int value) {

	int size = NULL;
	int** tmp = arr->arr;
	
	for (int i = 0; *tmp != NULL; tmp++, size++);
	
	arr->arr = _reMemory((size + 1) * sizeof(int*), arr->arr);
	if (!arr->arr) return;

	tmp = arr->arr;
	for (int i = 0; i < size; tmp++, i++);
	*tmp = _memoryAlloc(sizeof(int));
	**tmp = value; tmp++; *tmp = NULL;

	return 0;

}

void _printArr(_dynamicArr arr) {
	
	for (int** tmp = arr.arr; *tmp != NULL; *tmp++) {
		printf("%d ", **tmp);
	}
}

void _destroyArr(_dynamicArr arr) {

	for (int** tmp = arr.arr; *tmp != NULL; *tmp++) {
		free(*tmp);
	}
}