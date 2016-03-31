/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *last;
	int i = 0,s=0;
	if (str == NULL)
		return NULL;
	while (str[i] != '\0')
	{
		if (str[i] == 32&&str[i+1]!=32&&str[i+1]!='\0')
			s = i;
		i++;
	}
	last = (char*)malloc((i-s) * sizeof(char));
	i = 0; 
	if (s != 0)
		s++;
	while (str[s] != '\0'&&str[s]!=32)
	{
		last[i] = str[s];
		s++; i++;
	}
	last[i] = '\0';
	return last;
}
