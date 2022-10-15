//Name: Joseph Dunagan
//ASU ID: 1223251280
#include "QS.h"
#include <iostream>
#include <stdio.h>


using namespace std;

void QS::quickSort(int* a, int p, int r, char* arg, int printA){
	
	if(p < r){
		int q = partition(a, p, r, arg, printA);
		quickSort(a, p, q - 1, arg, printA);
		quickSort(a, q + 1, r, arg, printA);
	}
	
}

int QS::partition(int* a, int p, int r, char* arg, int printA){
	int x, i, j, temp;
	x = a[r];

	i = p - 1;
	for(j = p; j < r; j++){
		if(*arg == '1'){
			cout << "EWC: " << a[j] << " <= " << x << "?\n";
		}
		EWC++;
		if(a[j] <= x){
			i = i + 1;
			temp = a[i];
			a[i] = a[j];
			if(printA == 1){	
				cout << "A[" << p << ":" << r << "]: ";
				printArr(a,p,r);
			}
			a[j] = temp;
			if(printA == 1){	
				cout << "A[" << p << ":" << r << "]: ";
				printArr(a,p,r);
			}
		}
	}
	
	temp = a[i + 1];
	a[i + 1] = a[r];
	if(printA == 1){	
		cout << "A[" << p << ":" << r << "]: ";
		printArr(a,p,r);
	}
	a[r] = temp;
	if(printA == 1){	
		cout << "A[" << p << ":" << r << "]: ";
		printArr(a,p,r);
	}
	return i + 1;
}


void QS::printArr(int* arr, int begin, int end){
	for(int i = begin; i <= end; i++){
		cout << arr[i];
		if(i + 1 > end){//To get proper output
			
		}else{
			cout << " ";
		}
		//fprintf(out,  "%d ", arr[i]);
	}
	cout << "\n";
	//fprintf(out, "\n");
} 

int QS::getEWC(){
	return EWC;
}