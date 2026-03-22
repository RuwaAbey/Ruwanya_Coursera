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

### Preprocess Directives Demo Commands

Below are the instructions use for the C1M2V3 Demo

GCC is used in the following way on the command line

```bash
  $ gcc [OPTIONS] -E [FILE-TO-PREPROCESS]
```

### Compiler Example Commands

1. This will stop compilation after preprocessing has completed. Also specifies theoutput file to store as the preprocessed file (using the -o <FILE> option). All
warnings will be treated as errors and use the c99 c-standard.

```bash
  $ gcc -std=c99 -Werror -E main.c -o main.i
```
 
This will stop at the preprocessing step for the ARM Cortex-M4 processor

```bash
  $ arm-none-eabi-gcc -mcpu=cortex-m4 -std=c99 -Werror -E main.c -o main.i
```

This command will use the MSP compile time switch to call the msp platform 
print function. You define at the command line using the -D

```bash
  $ gcc -o main.out main.c kl25z.c msp.c my_file.c -DMSP
```

This command will use the KL25Z compile time switch to call the kl25 platform 
print function. 

```bash
  $ gcc -o main.out main.c kl25z.c msp.c my_file.c -DKL25Z
```

This command will not use any compile time switches and an error will print

```bash
  $ gcc -o main.out main.c kl25z.c msp.c my_file.c
```