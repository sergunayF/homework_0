#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct { int** arr; } _dynamicArr;

void _addValue(_dynamicArr* arr, int value);
void _printArr(_dynamicArr arr);

void _destroyArr(_dynamicArr arr);

_dynamicArr _createArray(arr);