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
  * @file kl25z.c
  * @brief This file contains the functions for the KL25Z board.
  * 
  * @author Ruwanya Abeynayake
  * @date 2026-03-22
  * 
  */

 #include <stdio.h>
 #include "kl25z.h"

/**
 * @brief This function prints the platfrom using, KL25Z
 * 
 * This function prints the platfrom currently usinng, for KL25Z
 * 
 * @param None
 * 
 * @return None
 */
 void kl25z_platform_print(void) {
    printf("KL25Z Platform Selected!\n");
 }

/**
 * @brief Logs the messages based on types
 * 
 * This function prints the messages based on the message type given as input,
 * which the message types are defined in the message_type_t enum. 
 * 
 * @param type: The message type to be logged
 * 
 * @return None
 */
 void kl25z_platform_log(message_type_t type){
    switch(type) {
        case MSG_INIT:
            printf("[INIT] KL25Z Platform Started\n");
            break;
        case MSG_STATUS:
            printf("[STATUS] KL25Z Platform Running\n");
            break;
        case MSG_STOP:
            printf("[STOP] KL25Z Platform Stopped\n");
            break;
        default:
            printf("[UNKNOWN]");
            break;
    }

 }

