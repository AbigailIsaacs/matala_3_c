
#include <stdio.h>
#include "headers.h"
#define WORD 30
#define LINE 256 
int main(){

	char function ='c';
	char str [WORD];
	char current= 'w';
	scanf("%c",&current);
	int i = 0;
	while(current!= ' '){
		str[i++] = current;
		scanf("%c",&current);
		
	}
	str[i]='\0';
	scanf("%c",&function);
	if ( function=='a'){
		functionA(i,str);
	}
	if ( function=='b'){
		functionB(i,str);
		
	}

	return 0;

}

void functionB(int len,char word[]){
	char current= 'w';
	
	while(scanf("%c",&current) != EOF){
		char simler[WORD];
		int i =0;
		
		while((current!= ' ')&&(current!= '\n')&&(current!= '\t')){
			simler[i++] = current;
			scanf("%c",&current);
		}
		simler[i]= '\0';
		if((i==len) || (i==len+1)){
			int index=0;
			int dif=0;
			for(int j=0;(j<i-1);j++){
				if(index<len-1){
					if(word[index] != simler[j]){
						dif++;
					}
					else{
						index++;
					}
				}
			}
			if(dif==1||dif==0){
				print(simler);
			}

		}
		
	}
}

void functionA(int len,char word[]){
	char current= 'w';
	while(scanf("%c",&current) != EOF){
		char line_string [LINE];
		int i = 0;
		while(current!= '\n'){
			line_string[i++] = current;
			scanf("%c",&current);
		
		}
		line_string[i]='\0';
		for(int c=0;c<i-len+1;c++){
			if(line_string[c]==word[0]){
				int j =1;
				for(j =1;j<len;j++){
					if(word[j]!=line_string[c+j]){
						break;
					}
				}
				if(j==len){
					print(line_string);
					break;
				}
			}

		}

	}

}

void print (char line []){
	int i = 1;
	char c = line[0];
	while(c!='\0'){
		printf("%c",c);
		c = line[i++];
	}
	printf("\n");

}
