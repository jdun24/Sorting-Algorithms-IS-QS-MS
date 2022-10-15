//Name: Joseph Dunagan
//ASU ID: 1223251280
#include "MS.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void MS::MergeSort(int* a, int p, int r, char* arg, int printA){
	int q;
	
	if(p >= r)
		return;
	q = (p + r) / 2; //q is placed around the middle, rounded down
	MergeSort( a,  p, q, arg, printA);		//Conq left
	MergeSort( a,  q + 1, r, arg, printA);	//Conq right
	Merge(a, p, q, r, arg, printA);
}

void MS::Merge(int* a, int p, int q, int r, char* arg, int printA){
	int nL = q - p + 1;
	int nR = r - q ;
	int i, j, k;
	
	int L[nL ];
	int R[nR ];

	for(i = 0; i < nL ; i++){
		L[i] = a[p + i];
		//cout << "p + i  = " << p + i  << "\n";
	}
	for(j = 0; j < nR ; j++){
		R[j] = a[q + j + 1];
	}
	
	k = p; //So that k can point to the start of a
	i = 0;
	j = 0;
	while(i < nL && j < nR){
		if(*arg == '1'){
			cout << "EWC: " << L[i] << " <= " << R[j] << "?\n";
		}
		EWC++;
		if(L[i] <= R[j]){
			a[k] = L[i];
				printArr(a,p, r, printA);//Prints if printA is 1
			i = i + 1;
		}else{
			a[k] = R[j];
				printArr(a,p, r, printA);//Prints if printA is 1
			j = j + 1;
		}
		k = k + 1;
	}
	
	while(i < nL){
		a[k] = L[i];
			printArr(a,p, r, printA);//Prints if printA is 1
		i = i + 1;
		k = k + 1;
	}
	while(j < nR){
		a[k] = R[j];
			printArr(a,p, r, printA);//Prints if printA is 1
		j = j + 1;
		k = k + 1;
	}
}

void MS::printArr(int* arr,int begin, int end,int printA){
	if(printA == 1){
		cout << "A[" << begin << ":" << end << "]: ";
		//fprintf(out,"A[%d:%d]: ", begin , end);
		for(int i = begin; i <= end; i++){
			cout << arr[i];
			if(i + 1 > end){//To get proper output
			
			}else{
				cout << " ";
			}
		}
		cout << "\n";
	}
} 

int MS::getEWC(){
	return EWC;
}