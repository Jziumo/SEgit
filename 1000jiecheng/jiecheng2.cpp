// jiechen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define MAX_NUM 8
#define STORE_SIZE 25

void printResult(int result[]){
    //print the result
	for(int i = STORE_SIZE - 1; i >= 0; i--)
	{
		printf("%d ",result[i]);
	}
    printf("\n");
}

void printResult2(int result[]){
    //print the result
	for(int i = 0; i < STORE_SIZE; ++i)
	{
		printf("%d ",result[i]);
	}
    printf("\n");
}

int main(int argc, char* argv[])
{
	int result[STORE_SIZE];
     
	//Initialize the result
	for(int i = 0; i < STORE_SIZE; i++)
	{
		result[i] = 0;
	}

	//Set the last key
	result[0] = 1;

	//Begin compute the result
	// MAX_NUM=6 STORE_SIZE=20
	for(int j = 1; j <= MAX_NUM; j++)
	{
		//Times each key with the new number
		for(int i = 0; i < STORE_SIZE; i++)
		{
			result[i] *= j;
		}
		printf("c1: ");

        printResult2(result);

        //We will add the 
		for(int i = 0; i < STORE_SIZE; i++)
		{
			if(result[i] >= 10)
			{			
				//Add the result of 10 times to the high key
				result[i + 1] += result[i] / 10;

				//Get the value of current key.
				result[i] = result[i] % 10;
			}

		}
		printf("c2: ");

        printResult2(result);
		
	}
	
    // printResult(result);
    
    //pause
	getchar();
	return 0;
}

