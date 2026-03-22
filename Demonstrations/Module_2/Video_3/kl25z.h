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
  * @file kl25z.h
  * @brief This file contains the definitions and function prototypes for the KL25Z board.
  * 
  * @author Ruwanya Abeynayake
  * @date 2026-03-22
  * 
  */

#ifndef __KL25Z_H__
#define __KL25Z_H__

/**
 * @brief This struct defines the message types for platform
 * 
 * This struct defines the message types for platform which includes MSG_INIT, MSG_STATUS, 
 * MSG_STOP
 * 
 * @param MSG_INIT: Message type for initialization
 * @param MSG_STATUS: Message type for status update
 * @param MSG_STOP: Message type for stopping the platform
 * 
 * @return None
 */

 typedef enum {
    MSG_INIT,
    MSG_STATUS,
    MSG_STOP
} message_type_t;

/**
 * @brief This function prints the platfrom using, KL25Z
 * 
 * This function prints the platfrom currently usinng, for KL25Z
 * 
 * @param None
 * 
 * @return None
 */
void kl25z_platform_print(void);

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
void kl25z_platform_log(messages_type_t type)

#endif /* __KL25Z_H__ */
