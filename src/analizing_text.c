#define __STDC_WANT_LIB_EXT1__ 1  //make optional versions of functions available
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TEXT_LEN 1000 //Maximum length of text
#define BUF_SIZE 100 //Input buffer size
#define MAX_WORDS 500 //Maximum number of different words
#define WORD_LEN 12  //Maximmum word length

int main(int argc,char **argv)
{
	char delimiters[] = " \n\".,;:!?)("; //Word delimiters
	char text[TEXT_LEN] = "";	//Stores the complete text
	char buf[BUF_SIZE];	//Stores one input line
	char words[MAX_WORDS][WORD_LEN];	//Stores words from the text
	int nword[MAX_WORDS]={0};	//Number of word occurrences
	int word_count = 0;	//Number of words stored
	
	printf("Enter text on an arbitrary number of lines.");
	printf("\nEnter an empty line to end input:\n");
	
	//Read an arbitrary number of lines of text
	while(true) {
		//An empty string containing just a newline
		//signals end of input
		fgets(buf,BUF_SIZE,stdin);
		if(buf[0] == '\0') {
			break;
		}


		//Check if we have space for latest input

		if(strcat_s(text,TEXT_LEN,buf)) {
			printf("Maximum capacity for text exceeded.Terminating program.\n");
			return 1;
		}
	}
	
	//The code find the words in the text array..
		
	//The code to output the words..
	
	return 0;
}
