//Name: Joseph Dunagan
//ASU ID: 1223251280
#ifndef IS_H
#define IS_H

#include <iostream>

using namespace std;
#pragma once

class IS{
	int EWC;
	public:
	IS(){
		
	}
	void sort(int* a, int n, char* arg, int printA);
	void printArr(int* a, int n);
	int getEWC();
};

#endif