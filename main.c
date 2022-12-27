#include <stdio.h>
#include "headers.h"
#define len 50

int main(){

	int arr[len];
	for (int i=0; i<len;i++){
		scanf("%d",(arr+i));
	}

	insertion_sort(arr,len);

	for(int i=0;i<len-1;i++){
		printf("%d,",*(arr+i));
	}

	printf("%d",*(arr+len-1));
	printf("\n");


	return 0;

}
