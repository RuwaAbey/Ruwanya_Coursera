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
* @file main.c
* @brief This file contains the main function for the MSP board and KL25Z board.
* 
* @author Ruwanya Abeynayake
* @date 2026-03-22
* 
*/

#include "my_file.h"

/* Uncomment the pragma to see the preprocessor exit as a failure */
//#pragma GCC poison printf

/* This is a compile time switch that includes different header files */
/* based on a command line define. This is just ONE way to implement this */

#if defined(KL25Z) && ! defined(MSP)
#include "kl25z.h"
#elif defined(MSP) && ! defined(KL25Z)
#include "msp.h"
#else
#error "Please specify only a single platform, -DKL25Z or -DMSP"
#endif

int main(void) {

    char arr[LENGTH];

    // Initialize x
    x = 5;

    // Clear the array first
    clear(arr, LENGTH);

    // Fill the array using x
    fill_array(arr, LENGTH);

    // Print the array
    print_array(arr, LENGTH);

    #ifdef KL25Z
    kl25z_platform_print();
    kl25z_platform_log(MSG_INIT);
    for (int i = 0; i < 3; i++) {
        kl25z_platform_log(MSG_STATUS);
    }
    kl25z_platform_log(MSG_STOP);
    #endif 
    #ifdef MSP
    msp_platform_print();
    msp_platform_log(MSG_INIT);
    for (int i = 0; i < 3; i++) {
        msp_platform_log(MSG_STATUS);
    }
    msp_platform_log(MSG_STOP);
    #endif
    
    return 0;
}