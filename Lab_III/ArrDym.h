#pragma once

#include <stdio.h>
#include <stdlib.h>

//typedef <res-type> (*<type-name>)<args;>;
typedef struct { int _len; int** arr; } _dynamicArr;

void _addValue(_dynamicArr* arr, int value);
void _printArr(_dynamicArr arr);

void _destroyArr(_dynamicArr arr);

_dynamicArr _createArray(int _len);