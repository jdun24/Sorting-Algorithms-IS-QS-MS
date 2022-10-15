//Name: Joseph Dunagan
//ASU ID: 1223251280

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

#include "IS.h"
#include "MS.h"
#include "QS.h"

using namespace std;

void printArr(int* arr,int n){
	for(int i = 1; i <= n; i++){
		cout << arr[i];
		if(i + 1 > n){//To get proper input
			
		}else{
			cout << " ";
		}
	}
	cout << "\n";
} 

int main(int argc, char *argv[]){
	if(argc != 3){
		cout << "Usage: ./PJ1 alg flag\n       alg should be in {InsertionSort, MergeSort, QuickSort}\n       flag should be in {0, 1}\n";
        return 0;   //can't execute rest of code without proper command usage
	}
	if(*argv[2] != '0' && *argv[2] != '1'){
		cout << "Usage: ./PJ1 alg flag\n       alg should be in {InsertionSort, MergeSort, QuickSort}\n       flag should be in {0, 1}\n";
		return 0;
	}
	int i, *A, lines;
	int printResult;
	int printArray; // if these are set to 1, they will do something, otherwise they do nothing
	
	FILE *input;
	input = fopen("INPUT.txt", "r");
	
	
	if (input == NULL) {
		cout << "Error: cannot open file INPUT.txt\n";
		return 0;
	}else{
		fscanf(input, "%d", &printResult);
		fscanf(input, "%d", &printArray);
		fscanf(input, "%d", &lines);
		lines++; // they dont want the 0 index used
		A = (int *) malloc((lines)*sizeof(int));
		
		if(A == NULL){
			cout << "Memory Allocation error\n";
		}else{
			for(i = 1;i <= lines; i++){	//They don't want the 0 index used
				fscanf(input, "%d", &A[i]);
			}
			
		}
	}

	
	if(strcmp(argv[1] , "InsertionSort") == 0){
		IS arr;
		arr.sort(A, lines - 1, argv[2], printArray);
		if(printResult == 1){
			cout << "A[1:" <<  lines - 1 << "] after sorting: ";
			printArr(A, lines - 1);
		}
		cout << "Number of EWCs: " << arr.getEWC() << "\n";
	}else if(strcmp(argv[1] , "QuickSort") == 0){
		QS arr;
		arr.quickSort(A, 1, lines - 1, argv[2], printArray);
		if(printResult == 1){
			cout << "A[1:" <<  lines - 1 << "] after sorting: ";
			printArr(A, lines - 1);
		}
		cout << "Number of EWCs: " << arr.getEWC() << "\n";
	}else if(strcmp(argv[1] , "MergeSort") == 0){
		MS arr;
		arr.MergeSort(A, 1, lines - 1, argv[2], printArray);
		if(printResult == 1){
			cout << "A[1:" <<  lines - 1 << "] after sorting: ";
			printArr(A, lines - 1);
		}
		cout << "Number of EWCs: " << arr.getEWC() << "\n";
	}else{
		cout << "Usage: ./PJ1 alg flag\n       alg should be in {InsertionSort, MergeSort, QuickSort}\n       flag should be in {0, 1}\n";
		return 0;
	}
	
	free(A);
	
	
 	return 0;
} 