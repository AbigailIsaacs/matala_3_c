#include <stdio.h>
#include "headers.h"

void shift_element(int* arr, int i){

	for(int j=i-1; j>=0;j--){
		*(arr+j+1)=  *(arr+j);
	}
}


void insertion_sort(int* arr , int len){

	int currentToInsert=0;
	int currentShift=0;
	int b =0;
	for(int i=1; i<len;i++){
		currentToInsert = *(arr+i);
		currentShift=0;
		b =0;
		for(int j=i-1; j>=0;j--){
			if(currentToInsert<*(arr+j)){
				currentShift++;
			}
			else{
				shift_element((arr+j+1),currentShift);
				*(arr+j+1) = currentToInsert;
				b=1;
				break;
			}
		}

		if(b==0){
			shift_element(arr,currentShift);
			*(arr) = currentToInsert;		
		}
	}

}



