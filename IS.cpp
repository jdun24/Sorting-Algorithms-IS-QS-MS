//Name: Joseph Dunagan
//ASU ID: 1223251280
#include "IS.h"
#include <iostream>
#include <stdio.h>


using namespace std;

void IS::sort(int* a, int n, char* arg, int printA){
	int i, j, key;
	EWC = 0;
	for(i = 2; i <= n; i++){
		key = a[i];
		j = i - 1;

		if(a[j] <= key){
			EWC++;
			if(*arg == '1'){
				cout << "EWC: " << a[j] << " > " << key << "?\n";
			}
		}
		
		while(j > 0 && a[j] > key){
			EWC++;
			if(*arg == '1'){
				cout << "EWC: " << a[j] << " > " << key << "?\n";
			}
			
			a[j + 1] = a[j ];
			if(printA == 1){
				cout << "A[1:" << n << "]: ";
				printArr(a,n);
			}
			j = j - 1;
		}
		a[j + 1] = key;
		if(printA == 1){
				cout << "A[1:" << n << "]: ";
				printArr(a,n);
		}
	}
}


void IS::printArr(int *arr,int n){
	for(int i = 1; i <= n; i++){
		cout << arr[i];
		
		if(i + 1 > n){//To get proper input
			
		}else{
			cout << " ";
		}
	}
	cout << "\n";
} 

int IS::getEWC(){
	return EWC;
}