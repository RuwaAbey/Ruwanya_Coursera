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
  * @file my_file.c
  * @brief This file contains the functions for buffer intitialization
  * 
  * @author Ruwanya Abeynayake
  * @date 2026-03-22
  * 
  */

#include <stdio.h>
#include "my_file.h"

/* Define the global variable */
int x = 0;

/**
 * @brief This function clear the buffer
 * 
 * This function clear the buffer by setting all elements to zero,
 * which the buffer is defined as an array of integers with a length of 10.
 * 
 * @param array: The buffer to be cleared
 * @param size: The size of the array
 * 
 * @return None
 */
void clear(char *ptr, int size){
    for(int i = 0; i < size; i ++){
        ptr[i] = 0;
    }
}

/**
 * @brief This fill the cleared buffer
 * 
 * This function fill the cleared buffer
 * by setting all elements to a specific value,
 * 
 * @param array: The buffer to be cleared
 * @param size: The size of the array
 * 
 * @return None
 */
void fill_array(char *ptr, int size){
    for(int i = 0; i < size; i ++){
        ptr[i] = i + x;
    }
}

/**
 * @brief This function prints the values in the buffer
 * 
 * This function prints the values in the buffer
 * which the buffer is defined as an array of integers with a length of 10.
 * 
 * @param array: The buffer to be cleared
 * @param size: The size of the array
 * 
 * @return None
 */
void print_array(char *ptr, int size){
    for(int i = 0; i < size; i ++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
}