/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief assignment 1
 *
 * 
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main(){

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test,SIZE);
  print_array(test,SIZE);
  
}

/* Add other Implementation File Code Here */

/**
 * @brief This function prints the array elements.
 *
 * This function will take unsigned char pointer to an n-element data array
 * and its length and prints the values in the array with its index
 *
 * @param array unsigned char pointer to an n-element data array
 * @param size length of the data array
 *
 * @return None
 */
void print_array(unsigned char *array,int size){

	for(int i=0; i < size; i++){
		printf("test[%d]: %u\n",i,array[i]);
	
	}

}

/**
 * @brief This function sorts the array from largest to smallest.
 *
 * This function will take unsigned char pointer to an n-element data array
 * and its length and sorts the array from largest to smallest.
 *
 * @param array unsigned char pointer to an n-element data array
 * @param size length of the data array
 *
 * @return None
 */
void sort_array(unsigned char *array, int size)
{

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j <size-1; j++)
		{
			int temp = array[j];
			if (array[j] > array[j+1]){
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	
	}

}
