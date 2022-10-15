//Name: Joseph Dunagan
//ASU ID: 1223251280
#ifndef QS_H
#define QS_H

#include <iostream>

using namespace std;
#pragma once

class QS{
	int EWC = 0;
	public:
	QS(){
		
	}
	void quickSort(int* a, int p, int r, char* arg, int printA);
	int partition(int* a, int p, int r, char* arg, int printA);
	int getEWC();
	
	void printArr(int a[], int begin, int n);
};

#endif