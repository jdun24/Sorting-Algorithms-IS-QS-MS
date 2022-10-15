//Name: Joseph Dunagan
//ASU ID: 1223251280
#ifndef MS_H
#define MS_H

#include <iostream>

using namespace std;
#pragma once

class MS{
	int EWC = 0;
	public:
	MS(){
		
	}
	void MergeSort(int a[], int p, int r, char* arg, int printA);
	void Merge(int a[], int p, int q, int r, char* arg, int printA);
	int getEWC();
	void printArr(int a[], int begin, int end, int printA);
};

#endif