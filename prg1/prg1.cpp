/* 
Date: Nov 11, 2020
Name: Andrew Kang
Goal: distinguish alphabet and korean in the words

study:
when to use unsigned char
when,how to use scanf 

*/
//#pragma warning(disable: 4996)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<stdio.h>


int main(void)
{
	/*variables*/
	unsigned char word[100]; //case for only positive number since ascci starts from 00

	/*menu*/
	while (1)
	{
		/*input and output*/
		printf("[0:Exit]Type a word: \n");
		int err = scanf("%s", word);
			/*error check*/
			if (err == 0)//when success return numer of inputs otherwise return 0 
			{
				printf("error\n");
				return 0;
			}
		
		/*distinguish input choice*/
		for (int i = 0; word[i]; i++)//search all the words
		{
			/*case for eng*/
			if (word[i] >= 65 && word[i] <= 90 || word[i] >= 97 && word[i] <= 122)
			{
				printf("%c is an alphabet\n", word[i]);
			}
			/*case for kor*/
			else if (word[i] >= 176 && word[i] <= 200)
			{
				printf("%c is a korean\n", word[i]);
			}
			/*case for exit*/
			else if (word[i] == 48) //ascci for 0 is 48
			{
				printf("bye\n");
				return 0;
			}
			/*case for non above*/
			else
			{
				printf("%c it is neither eng nor kor\n", word[i]);
			}
		}
	}

	return 0;
}
