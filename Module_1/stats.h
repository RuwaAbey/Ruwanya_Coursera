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
 * @file stats.h 
 * @brief assignment 1
 *
 * This is a simple programe which can analyze an array of unsigned char data items and
 * report alaytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author Ruwanya Abeynayake
 * @date 17/04/2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

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
void print_array(unsigned char *array, int size);

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
void sort_array(unsigned char *array, int size);



#endif /* __STATS_H__ */
